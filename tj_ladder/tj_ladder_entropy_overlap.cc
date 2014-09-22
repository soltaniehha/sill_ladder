// g++ -o run.exe tj_ladder_entropy_overlap.cc -I/Users/mohammad/include -DWITH_LAPACK -lblas -llapack -g -O2 
#include "math.h"
#include <iostream>
#include <iosfwd>
#include <fstream>
#include <math.h>
#include <dmtk/vector.h>
#include <dmtk/matrix.h>

#define IBITS(n,i) (((n) & 1 << i) >> i)
#define IBSET(n,i) ((n) | (1<<i))
#define IBCLR(n,i) ((n)^(IBITS(n,i) << i))

using namespace std;
using namespace dmtk;

unsigned factorial(unsigned);
void Diagonalize(int, Matrix<double>, Matrix<double> &, Vector<double> &);
void ChargePart(double, int, int, Matrix<double> &, Vector<int> &, double &);

class state {
  public:
	int up;
	int dn;
	
	bool operator> (const state & other) {
		if ( up > other.up) return true;
		if (up == other.up && dn > other.dn) return true;
		return false;
	}
	
	bool operator< (const state & other) {
		if ( up < other.up) return true;
		if (up == other.up && dn < other.dn) return true;
		return false;
	}
	
	bool operator== (const state & other) {
		if ( (up == other.up) && (dn == other.dn) ) return true;
		return false;
	}
};

int main() {
	double J, Jmax, Jmin, Jstep, t, g;
	int L, Nsinglet; // Nsinglet = Ndown
	int dim = 0;
	
	cout << "L = ";
	cin >> L;
	cout << "Nsinglet = ";
	cin >> Nsinglet;
	cout << "t: ";
	cin >> t;
	cout << "j_min: ";
	cin >> Jmin;
	cout << "j_max: ";
	cin >> Jmax;
	cout << "j_step: ";
	cin >> Jstep;
	
	char file_name[255];
	std::snprintf(file_name, 255, "Entropy_Energy_L=%d Nsinglet=%d.dat", L, Nsinglet);
	std::ofstream Eout(file_name,std::ios::out);
	if(!Eout) {
		std::cout << "*** ERROR: Could not open file " << file_name << std::endl;
		exit(-1);
	}
	char file_name2[255];
	std::snprintf(file_name2, 255, "Overlap_L=%d Nsinglet=%d.dat", L, Nsinglet);
	std::ofstream Overlap_out(file_name2,std::ios::out);
	if(!Overlap_out) {
		std::cout << "*** ERROR: Could not open file " << file_name2 << std::endl;
		exit(-1);
	}
	char file_name3[255];
	std::snprintf(file_name3, 255, "Basis_L=%d Nsinglet=%d.dat", L, Nsinglet);
	std::ofstream Bout(file_name3,std::ios::out);
	if(!Bout) {
		std::cout << "*** ERROR: Could not open file " << file_name3 << std::endl;
		exit(-1);
	}
	int MAXdim = pow(2.,2*L);
	
	// ChargePart (Spinless Fermions)
	
	int dim_charge = factorial(L)/factorial(Nsinglet)/factorial(L-Nsinglet);
	Matrix<double> EigVec_charge(dim_charge, dim_charge);
	Vector<int> basis_charge(dim_charge);
	double GS_Energy_Spinless;
	ChargePart(t, L, Nsinglet, EigVec_charge, basis_charge, GS_Energy_Spinless);
	
	///////////////////////////////////////////////////
	
	Vector<state> basis;
	for (int iup=0; iup < MAXdim; iup++) {
			int nup_bits = 0;
			for (int bit = 0; bit < 2*L; bit++)
				nup_bits += IBITS(iup,bit);
			
			if (nup_bits == Nsinglet) {
				for (int idn=0; idn < MAXdim; idn++) {
					int ndn_bits = 0;
					for (int bit = 0; bit < 2*L; bit++)
						ndn_bits += IBITS(idn,bit);
						
					if (ndn_bits == Nsinglet) {
						int Overlap = 0;
						int nfix = 0;
						for (int bit = 0; bit < 2*L; bit++)
							Overlap += IBITS(idn,bit) & IBITS(iup,bit);
						
						for (int bit = 0; bit < L; bit++)
							nfix += IBITS(idn,bit) + IBITS(iup,bit);
						
						if (Overlap == 0 && nfix == Nsinglet) {
							dim++;
							basis.resize(dim);
							basis[dim-1].up = iup;
							basis[dim-1].dn = idn;
						}
					}
				}
			}
		}
	
	dmtk::Matrix<double> S;
	S.resize(dim,dim);
	Matrix<double> H(dim,dim);
	Matrix<double> EigVec(dim,dim);
	Vector<double> energy(dim);
	
	// Hopping part (Charge lattice)
	
	for (int col = 0; col < dim; col++) {
		for (int site = 0; site < L; site++) {
			int nn_left = ( site == L-1 ) ? 0 : site+1;
			int nn_right = ( site == 0 ) ? L-1 : site-1;
			int NEWup = basis[col].up;
			int NEWdn = basis[col].dn;
			int row;
			int pass = 0;
			if (IBITS(basis[col].up,site) == 1 && (IBITS(basis[col].up,nn_left) + IBITS(basis[col].dn,nn_left) == 0)) {
				NEWup = IBCLR(NEWup, site);
				NEWup = IBSET(NEWup, nn_left);
				pass = 1;
			}
			if (IBITS(basis[col].dn,site) == 1 && (IBITS(basis[col].up,nn_left) + IBITS(basis[col].dn,nn_left) == 0)) {
				NEWdn = IBCLR(NEWdn, site);
				NEWdn = IBSET(NEWdn, nn_left);
				pass = 1;
			}
			if (pass == 1) { // hopping left (Charge)
				for (int row = 0; row < dim; row++) {
					if (basis[row].up == NEWup && basis[row].dn == NEWdn) {
						if (site == L-1) {
							H(col,row) += pow(-1.,Nsinglet-1)*(-t);
						}
						else
							H(col,row) += -t;
						row = dim;
					}
				}
			}
			
			NEWup = basis[col].up;
			NEWdn = basis[col].dn;
			pass = 0;
			if (IBITS(basis[col].up,site) == 1 && (IBITS(basis[col].up,nn_right) + IBITS(basis[col].dn,nn_right) == 0)) {
				NEWup = IBCLR(NEWup, site);
				NEWup = IBSET(NEWup, nn_right);
				pass = 1;
			}
			if (IBITS(basis[col].dn,site) == 1 && (IBITS(basis[col].up,nn_right) + IBITS(basis[col].dn,nn_right) == 0)) {
				NEWdn = IBCLR(NEWdn, site);
				NEWdn = IBSET(NEWdn, nn_right);
				pass = 1;
			}
			if (pass == 1) { // going right (Charge)
				for (int row = 0; row < dim; row++) {
					if (basis[row].up == NEWup && basis[row].dn == NEWdn) {
						if (site == 0)
							H(col,row) += pow(-1.,Nsinglet-1)*(-t);
						else 
							H(col,row) += -t;
						row = dim;
					}
				}
			}
		}
	}
	
	// Hopping part (Impurity lattice)
	
	for (int col = 0; col < dim; col++) {
		for (int site = L; site < 2*L; site++) {
			int nn_left = ( site == 2*L-1 ) ? L : site+1;
			int nn_right = ( site == L ) ? 2*L-1 : site-1;
			int NEWup = basis[col].up;
			int NEWdn = basis[col].dn;
			int row;
			int pass = 0;
			if (IBITS(basis[col].up,site) == 1 && (IBITS(basis[col].up,nn_left) + IBITS(basis[col].dn,nn_left) == 0)) {
				NEWup = IBCLR(NEWup, site);
				NEWup = IBSET(NEWup, nn_left);
				pass = 1;
			}
			if (IBITS(basis[col].dn,site) == 1 && (IBITS(basis[col].up,nn_left) + IBITS(basis[col].dn,nn_left) == 0)) {
				NEWdn = IBCLR(NEWdn, site);
				NEWdn = IBSET(NEWdn, nn_left);
				pass = 1;
			}
			if (pass == 1) { // hopping left (Impurity)
				for (int row = 0; row < dim; row++) {
					if (basis[row].up == NEWup && basis[row].dn == NEWdn) {
						if (site == 2*L-1)
							H(col,row) += pow(-1.,Nsinglet-1)*(-t);
						else 
							H(col,row) += -t;
						row = dim;
					}
				}
			}
			
			NEWup = basis[col].up;
			NEWdn = basis[col].dn;
			pass = 0;
			if (IBITS(basis[col].up,site) == 1 && (IBITS(basis[col].up,nn_right) + IBITS(basis[col].dn,nn_right) == 0)) {
				NEWup = IBCLR(NEWup, site);
				NEWup = IBSET(NEWup, nn_right);
				pass = 1;
			}
			if (IBITS(basis[col].dn,site) == 1 && (IBITS(basis[col].up,nn_right) + IBITS(basis[col].dn,nn_right) == 0)) {
				NEWdn = IBCLR(NEWdn, site);
				NEWdn = IBSET(NEWdn, nn_right);
				pass = 1;
			}
			if (pass == 1) { // going right (Impurity)
				for (int row = 0; row < dim; row++) {
					if (basis[row].up == NEWup && basis[row].dn == NEWdn) {
						if (site == L)
							H(col,row) += pow(-1.,Nsinglet-1)*(-t);
						else 
							H(col,row) += -t;
						row = dim;
					}
				}
			}
		}
	}
	
	double JJJ = Jstep;
	for (J = Jmin; J < Jmax; J+=Jstep) {
		if (J > 20)
			Jstep = 10;
		// Diagonal Elements
		
		for (int col = 0; col < dim; col++) { // loop over all the states
			H(col,col) = 0;
			for ( int site = 0; site < L; site++) {
				if ( IBITS(basis[col].up,site) && IBITS(basis[col].up,site+L) == 1) {H(col,col) += J/4;}
				else if ( IBITS(basis[col].dn,site) && IBITS(basis[col].dn,site+L) == 1) {H(col,col) += J/4;}
				else if ( IBITS(basis[col].up,site) && IBITS(basis[col].dn,site+L) == 1) {H(col,col) += -J/4;}
				else if ( IBITS(basis[col].dn,site) && IBITS(basis[col].up,site+L) == 1) {H(col,col) += -J/4;}
			}
		}
		
		// Off-Diagonal Terms
		int a = 0;
		//Fliping part
		for (int col = 0; col < dim; col++) { // loop over all the states
			for ( int site = 0; site < L; site++) {
				if (IBITS(basis[col].up,site) && IBITS(basis[col].dn,site+L) == 1 || IBITS(basis[col].dn,site) && IBITS(basis[col].up,site+L) == 1) {
					int mask = IBSET (0,site) | IBSET(0,site+L);
					int NEWup = mask ^ basis[col].up;
					int NEWdn = mask ^ basis[col].dn;
					int row;
					for (int d = 0; d < dim; d++) {
						if (basis[d].up == NEWup) {
							for (int f = d; f < dim; f++) {
								if (basis[f].dn == NEWdn) {
									H(col,f) = J/2;
									Bout << endl << endl << "********* Flipping **********" << a << endl << endl;
									a++;
									for (int bit = 0; bit < 2*L; bit++) {
										Bout << IBITS(basis[col].up,bit)+2*IBITS(basis[col].dn,bit);
										if (bit == L-1) Bout << endl;
									}
									Bout << endl << "Flips to: " << endl;
									for (int bit = 0; bit < 2*L; bit++) {
										Bout << IBITS(basis[f].up,bit)+2*IBITS(basis[f].dn,bit);
										if (bit == L-1) Bout << endl;
									}
									Bout << endl << "___________________________________"<< endl;
									f = dim;
									d = dim;
									
								}
							}
						}
					}
				}
			}
		}
		clock_t start, end;
		start = clock();
		cout << "\n\t\t ***** Diagonalizing the Hamiltonian " << dim << " X " << dim << " *****\n\n";
		
		// solve the eigenvalue problem
		
		Diagonalize(dim,H,EigVec,energy);
		
		end = clock();
		cout << "***** Diagonalizing the Hamiltonian " << dim << " X " << dim << " is complete, and it took " << (double)(end-start)/CLOCKS_PER_SEC << " seconds! *****" << endl;
		
		Eout << "G.S. Energy for Jk= "<< J << "	" << energy(0) << endl;//+ 3./4. * J * Nsinglet << endl; // ESpinless = ESpinfull + 3/4 * Jk * NSinglet
		
		if (J == Jmin || J == Jmax-Jstep) {
			cout << endl << "*******************************************************" << endl;
			cout << "First 10 energies of the spinfull system for Jk=" << J << endl;
			cout << "*******************************************************" << endl;
			for (int i = 0; i < 10; i++)
				cout << "Energy of state_" << i << ":	" << energy(i) << endl;
		}
		
		// Overlap with the Singlet theory
		
		double C = factorial(L) * factorial(L) * (Nsinglet+1) / (double)factorial(L-Nsinglet) / (double)factorial(L-Nsinglet);
		C = 0;
		double Overlap = 0;
		
		for (int n = 0; n < dim; n++) {
			// Finding the coefficient coming from the spinless lattice for the upper leg
			int state_charge = 0;
			int d_ch = 0;
			int d_i = 0;
			
			for (int bit = 0; bit < L; bit++)
				if( IBITS(basis[n].up,bit) == 1 || IBITS(basis[n].dn,bit) == 1 )
					state_charge = IBSET (state_charge, bit);
	
			for (int row = 0; row < dim_charge; row++)
			if (basis_charge[row] == state_charge) {
					d_ch = row; 
					row = dim_charge;
				}
					
			// Finding the coefficient coming from the spinless lattice for the lower leg
			state_charge = 0;
			for (int bit = L; bit < 2*L; bit++)
				if( IBITS(basis[n].up,bit) == 1 || IBITS(basis[n].dn,bit) == 1 )
					state_charge = IBSET (state_charge, bit-L);
			
			for (int row = 0; row < dim_charge; row++)
			if (basis_charge[row] == state_charge) {
					d_i = row; 
					row = dim_charge;
				}
					
			int Ndn_ch = 0;
			for (int bit = 0; bit < L; bit++)
				Ndn_ch += IBITS(basis[n].dn,bit);
			
			g = EigVec_charge(0,d_ch) * EigVec_charge(0,d_i) * factorial(Ndn_ch) * factorial(Nsinglet-Ndn_ch) * pow(-1.,(Ndn_ch));
			
			Overlap += EigVec(0,n) * g;
			C += g * g;
		}
		Overlap = Overlap / sqrt(C);
		
		// Overlap Between G.S. of Exact Diagonalization and G.S. of the Singlet Theory
		
		Overlap_out << J << "	" << abs(Overlap);
		
		// Showing the Basis
		
		for (int i = 0; i < dim; i++) {
			Bout << endl << "Basis_" << i << ":" << endl;
			for (int bit = 0; bit < 2*L; bit++) {
				Bout << IBITS(basis[i].up,bit)+2*IBITS(basis[i].dn,bit);
				if (bit == L-1) Bout << endl;
			}
			Bout << "	Coefficient: " << EigVec(0,i) << endl;
		}
		
		// Overlap Between G.S. of Exact Diagonalization and G.S. of the Vertical Singlet
		
		C = 0;
		double OverlapVS = 0; // Overlap with the Vertical Singlet G.S.
		
		for (int n = 0; n < dim; n++) {
			//C = factorial(L) * pow (2.,Nsinglet) / (double)factorial(Nsinglet) / (double)factorial(L - Nsinglet);
			int tempsum = 0;
			for (int bit = 0; bit < L; bit++) {
				if ( (IBITS(basis[n].up,bit) == 1 && IBITS(basis[n].dn,bit+L) == 1) || (IBITS(basis[n].dn,bit) == 1 && IBITS(basis[n].up,bit+L) == 1) 
					|| (IBITS(basis[n].up,bit) + IBITS(basis[n].dn,bit) + IBITS(basis[n].up,bit+L) + IBITS(basis[n].dn,bit+L) == 0) )
					tempsum++;
			}
			if (tempsum == L) {
				// Finding the coefficient coming from the spinless lattice for the upper leg
				int state_charge = 0;
				int d_ch = 0;
				int d_i = 0;
				
				for (int bit = 0; bit < L; bit++)
					if( IBITS(basis[n].up,bit) == 1 || IBITS(basis[n].dn,bit) == 1 )
						state_charge = IBSET (state_charge, bit);
				
				for (int row = 0; row < dim_charge; row++)
				if (basis_charge[row] == state_charge){ 
						d_ch = row; 
						row = dim_charge;
					}
				
				// Finding the coefficient coming from the spinless lattice for the lower leg: Since both upper and lower leg have the same charge config. in here so this quantity is equal to the one for the upper leg 
				
				int Ndn_ch = 0;
				for (int bit = 0; bit < L; bit++)
					Ndn_ch += IBITS(basis[n].dn,bit);
				
				g = EigVec_charge(0,d_ch) * pow(-1.,Ndn_ch);
				
				OverlapVS += EigVec(0,n) * g;
				C += pow(g,2);
			}
		}
		OverlapVS = OverlapVS / sqrt(C);
		
		Overlap_out << "	" << abs(OverlapVS);
		
		if (J == Jmin || J == Jmax-JJJ) {
			cout << endl << "L: " << L << "	Nsinglet: "<< Nsinglet << "	t: " << t << "	J: " << J << endl;
			cout << "dim: " << dim << "	C : " << C << endl << endl;
	
			cout << "***** Overlap with Singlet Theory: " << abs(Overlap) << "	Overlap with Vertical Singlet: " << abs(OverlapVS) << " *****"<< endl << endl;
		}
		
		// Finding entropy
		
		int mask = IBSET(0,L)-1;
		Vector<state> basis2(0);
		for(int i = 0; i < dim; i++) {
			state state0 = basis[i];
			state state1;
			state1.up = state0.up & mask;
			state1.dn = state0.dn & mask;
			bool found = false;
			for(int j = 0; j < basis2.size(); j++)
				if(state1 == basis2(j)) 
					found = true; break;
			//if(!found) cout << "ADDING " << state1.up << " " << state1.dn << endl;
			if(!found) 
				basis2.resize(basis2.size()+1); basis2(basis2.size()-1) = state1;
		}
		int d0 = basis2.size();
		cout << "DIM0 = " << d0 << endl;
		Matrix<double> rho(d0,d0);
		Matrix<double> evec(d0,d0);
		Vector<double> eval(d0);
		for(int i = 0; i < dim; i++) {
			state state0 = basis(i);
			state state1a;
			state1a.up = state0.up & mask;
			state1a.dn = state0.dn & mask;
			state state1b;
			state1b.up = (state0.up >> L) & mask;
			state1b.dn = (state0.dn >> L) & mask;
			int i1 = 0;
			for(int k = 0; k < d0; k++) 
				if(state1a == basis2(k)) 
					i1 = k; break;
			for(int j = 0; j < dim; j++) {
				state state0 = basis(j);
				state state2a;
				state2a.up = state0.up & mask;
				state2a.dn = state0.dn & mask;
				state state2b;
				state2b.up = (state0.up >> L) & mask;
				state2b.dn = (state0.dn >> L) & mask;
				if(state1b == state2b) {
					int i2 = 0;
					for(int k = 0; k < d0; k++) { if(state2a == basis2(k)) { i2 = k; break; }}
					rho(i1,i2) += EigVec(0,i)*EigVec(0,j);
				}
			}
		}
		double tr = 0;
		for(int i = 0; i < d0; i++)
			tr += rho(i,i);
		
		double s = 0;
		int deg = 0;
		Diagonalize(d0,rho,evec,eval);
		for(int i = 0; i < d0; i++)
		if(eval(i) > 1.e-10) {
				deg++;
				s += eval(i)*log(eval(i));
			}
		Overlap_out << "	" << -s << "	" << tr << endl;
	}
	
	Overlap_out.close();
	Eout.close();
	Bout.close();
	return 0;
}


//diagonalize a symmetric matrix -- gives eigenvalues and eigenvectors using LAPACK library dsyev.
void Diagonalize(int dim, Matrix<double> mat, Matrix<double> &evect, Vector<double> &eval)
{
	char jobz = 'V'; // V/N indicates that eigenvectors should/should not be calculated. 
	char uplo = 'U'; // U/L indicated that the upper/lower triangle of the symmetric matrix is stored. 
	Matrix<double> mts(dim,dim);
	int i, j, k;
	for (i = 0; i < dim; i++){
		for (j = 0; j < dim; j++){
			mts(j,i) = mat(j,i); 
		}
	}
	Vector<double> vals(dim); 
	int lwork = 3*dim-1;
	Vector<double> work(lwork); 
	DMTK_int info;
	
	cout << " Hamiltonian Dimension: " << dim << " --- " << mat.rows() << endl;
	
	dsyev_(jobz, uplo, dim, mts.array(), dim, vals.array(), work.array(), lwork, info);
	
	for (i = 0; i < dim; i++) {
		for(j = 0; j < dim; j++)
			evect(i,j) = mts(i,j);
		eval(i) = vals(i);
	}
	
	// Sorting the eigenstates and eigenenergies in an increasing order!
	
	double temp;
	for (j = 0; j < dim; j++)
		for (i = 0; i < dim-1; i++)
			if (eval(i) > eval(i+1)) {
				temp = eval(i); eval(i) = eval(i+1); eval(i+1) = temp;
				
				for (k = 0; k < dim; k++) {
					temp = evect(i,k);
					evect(i,k) = evect(i+1,k);
					evect(i+1,k) = temp;
	      }
	    }
		
	cout << " Diagonalization info " << info << " ************ " << endl << endl;
	
	
} //End Diagonalization

// Factorial

unsigned factorial(unsigned n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void ChargePart(double t, int L, int Nsinglet, Matrix<double> &EigVec_charge, Vector<int> &basis, double &GS_Energy_Spinless) {
	int MAXdim = pow(2.,L);
	int dim_charge=0;

	for (int i=0; i < MAXdim; i++) { // Making basis
		int n_bits = 0;
		for (int bit = 0; bit < L; bit++)
			n_bits += IBITS(i,bit);
		
		if (n_bits == Nsinglet) {
			dim_charge++;
			basis.resize(dim_charge);
			basis[dim_charge-1] = i;
		}
	}

	Matrix<double> H_charge(dim_charge,dim_charge);
					 
	// Hopping part
					 
	for (int col = 0; col < dim_charge; col++) {
		for (int site = 0; site < L; site++) {
			int nn_left = ( site == L-1 ) ? 0 : site+1;
			int nn_right = ( site == 0 ) ? L-1 : site-1;
			int NEWstate = basis[col];
			if (IBITS(basis[col],site) == 1 && (IBITS(basis[col],nn_left) == 0)) {  // hopping left
				NEWstate = IBCLR(NEWstate, site);
				NEWstate = IBSET(NEWstate, nn_left);
				for (int row = 0; row < dim_charge; row++) {
					if (basis[row] == NEWstate) {
						if (site == L-1)
							H_charge(col,row) += pow(-1.,Nsinglet-1)*(-t);
						else 
							H_charge(col,row) += -t;
						row = dim_charge;
					}
				}
			}
	
			NEWstate = basis[col];
			if (IBITS(basis[col],site) == 1 && (IBITS(basis[col],nn_right) == 0)) {  // hopping right 
				NEWstate = IBCLR(basis[col], site);
				NEWstate = IBSET(NEWstate, nn_right);
				for (int row = 0; row < dim_charge; row++) {
					if (basis[row] == NEWstate) {
						if (site == 0)
							H_charge(col,row) += pow(-1.,Nsinglet-1)*(-t);
						else 
							H_charge(col,row) += -t;
						row = dim_charge;
					}
				}
			}
		}
	} // End of hopping
	
	// solve the generalized eigenvalue problem
	
	dmtk::Matrix<double> S_charge;
	S_charge.resize(dim_charge,dim_charge);
	EigVec_charge.resize(dim_charge, dim_charge);
	Vector<double> eigEn_charge(dim_charge);
	
	Diagonalize(dim_charge, H_charge, EigVec_charge, eigEn_charge);
					 
	// Energy
	
	cout << endl << "*** Hamiltonian of the Spinless Fermions ***" << endl << endl; 
	for (int i=0; i<dim_charge; i++) {
		for (int j=0; j<dim_charge; j++)
			cout << H_charge(j,i) << "	";
		cout << endl;
	}
	cout << "\n*****************************************************" << endl;
	cout << "First 10 energies of the spinless fermions for t=" << t << endl; 
	cout << "*****************************************************" << endl;
	for(int ii = 0; ii < 10; ii++)
		cout << "Energy of state_" << ii << " : " << eigEn_charge(ii) << endl;

	GS_Energy_Spinless = eigEn_charge(0);
	cout << endl << "***** Ground_State of the spinless fermions *****" << endl;
	cout << endl << "Ground_State  : " << endl;
	for (int i = 0; i < dim_charge; i++)
		cout << EigVec_charge(0,i) << endl;	
}
