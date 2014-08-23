// g++ -o run_complex.exe complex_DiagonalizationTest.cc -I/Users/mohammad/include -DWITH_LAPACK -lblas -llapack -g -O2
//============================================================================
// Name        : complex_DiagonalizationTest.cc
// Author      : Mohammad Soltanieh-ha
// Description : This program solves for the eigenvalues and, if desired, the eigenvectors for a complex Hamiltonian matrix H., using LAPACK pckage zgeev.
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <dmtk/matrix.h>
#include <dmtk/vector.h>
#include <LAPACK/zgeev.h>

using namespace std;
using namespace dmtk;

void Diagonalize_complex(int, Matrix<complex<double> >, Matrix<complex<double> > &, Vector<complex<double> > &);

int main()
{
    clock_t start, end;
    start = clock();
	int dim = 3;
	Matrix<complex<double> > H(dim,dim); // Our test 3 by 3 symmetric Hamiltonian H.

	H(0,0)=complex<double> (1,0) ;H(0,1)=complex<double> (0,0) ;H(0,2)=complex<double> (2,0) ;
	H(1,0)=complex<double> (0,0) ;H(1,1)=complex<double> (-4,0) ;H(1,2)=complex<double> (0,0) ;
	H(2,0)=complex<double> (2,0) ;H(2,1)=complex<double> (0,0) ;H(2,2)=complex<double> (-1,0) ;
	
	int i, j;
	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++)
			cout << H(i,j) << "	";
		cout << endl;
	}
	
	Matrix<complex<double> > EigVec(dim,dim);
	Vector<complex<double> > energy(dim);
	//CALLUING LINE
	Diagonalize_complex(dim,H,EigVec,energy);
	//WHERE dim is dimension, H is the matrix, EigVe1 is a matrix with eigen vects and eigen1 is a vector with the eigenenergies.
	for (i = 0; i < dim; i++) {
		cout << "State: " << i << ", energy = " << fixed << setprecision(5) << energy(i).real() << "	";
		cout << "Eigen.State = {";
		for (j = 0; j < dim; j++)
			cout << fixed << setprecision(5) << EigVec(i,j) << ", ";
		cout << "\b\b}" << endl;
	}
	
    end = clock();
    cout << endl << "DONE!  --> CPU time: " << (double)(end-start)/CLOCKS_PER_SEC << " (s)" << endl << endl;
	
	return 0;
}

//diagonalize a symmetric complex matrix -- gives eigenvalues and eigenvectors using LAPACK library zgeev.
//For more info: http://www-heller.harvard.edu/people/shaw/programs/lapack.html
void Diagonalize_complex(int dim, Matrix<complex<double> > mat, Matrix<complex<double> > &evect, Vector<complex<double> > &eval)
{
	char  jobvl = 'N'; /* V/N to calculate/not calculate the left eigenvectors
		  of the matrix H.*/
	char  jobvr = 'V'; // As above, but for the right eigenvectors.
	int N; N=dim;
	int lwork = 4 * dim;
	Vector<complex<double> > work(lwork);
	int info;
	Vector<complex<double> > vals(dim); 
	Vector <double> RWORK(2*dim);
	Matrix<complex<double> > mts(dim,dim);
	Matrix<complex<double> > VL(dim,dim);
	Matrix<complex<double> > VR(dim,dim);

	for (int i1 = 0; i1 < dim; i1++) {
		for (int j1 = i1 + 1; j1 < dim; j1++) {
			if( (abs(mat(j1,i1).real()- mat(i1,j1).real()) > 1.e-10) || (abs(mat(j1,i1).imag() + mat(i1,j1).imag()) > 1.e-10)) cout << "ERROR " << "i1:"<< i1 << "	j1:"<< j1 << "	mat(i1,j1):"<< mat(i1,j1) << " mat(j1,i1):" << mat(j1,i1) << endl ; 
		}
	}
	
	int i, j, k;
	for (i = 0; i < dim; i++){
		for (j = 0; j < dim; j++){
			mts(j,i) = mat(j,i); 
		}
	}
		
	cout << " Hamiltonian Dimension: " << dim << " --- " << mat.rows() << endl;
		
	zgeev_(jobvl, jobvr, dim, mts.array(), dim, vals.array(), VL.array() ,dim, VR.array() , dim, work.array(), lwork, RWORK.array(), info);
	
	for (i = 0; i < dim; i++) {
		for(j = 0; j < dim; j++)
			evect(i,j) = VR(i,j);
		eval(i) = vals(i);
	}
	
// Sorting the eigenstates and eigenenergies in an increasing order!
		
	complex<double> temp;
	for (j = 0; j < dim; j++)
		for (i = 0; i < dim-1; i++)
			if (eval(i).real() > eval(i+1).real()) {
				temp = eval(i); eval(i) = eval(i+1); 
				eval(i+1) = temp;
				
				for (k = 0; k < dim; k++) {
					temp = evect(i,k);
					evect(i,k) = evect(i+1,k);
					evect(i+1,k) = temp;
				}
			}
		
	cout << " Diagonalization info " << info << " ************ " << endl << endl;
	
} //End Diagonalization
