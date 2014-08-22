// g++ -o run DiagonalizationTest.cc -I/Users/mohammad/include -DWITH_LAPACK -lblas -llapack -g -O2
//============================================================================
// Name        : DiagonalizationTest.cpp
// Author      : Mohammad Soltanieh-ha
// Description : A test for solving a matrix, using LAPACK pckage dsyev.
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <dmtk/matrix.h>
#include <dmtk/vector.h>

using namespace std;
using namespace dmtk;

void Diagonalize(int, Matrix<double>, Matrix<double> &, Vector<double> &);

int main()
{
    clock_t start, end;
    start = clock();
	int dim = 3;
	Matrix<double> H(dim,dim); // Our test 3 by 3 symmetric Hamiltonian H.
	H(0,0)=1 ;H(0,1)=0 ;H(0,2)=2 ;
	H(1,0)=0 ;H(1,1)=-4 ;H(1,2)=0 ;
	H(2,0)=2 ;H(2,1)=0 ;H(2,2)=-1 ;
	
	int i, j;
	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++)
			cout << H(i,j) << "	";
		cout << endl;
	}
	
	Matrix<double> EigVec(dim,dim);
	Vector<double> energy(dim);
	//CALLUING LINE
	Diagonalize(dim,H,EigVec,energy);
	//WHERE dim is dimension, H is the matrix, EigVe1 is a matrix with eigen vects and eigen1 is a vector with the eigenenergies.
	for (i = 0; i < dim; i++) {
		cout << "State: " << i << ", energy = " << fixed << setprecision(5) << energy(i) << "	";
		cout << "Eigen energy = {";
		for (j = 0; j < dim; j++)
			cout << fixed << setprecision(5) << EigVec(i,j) << ", ";
		cout << "\b\b}" << endl;
	}
	
    end = clock();
    cout << endl << "DONE!  --> CPU time: " << (double)(end-start)/CLOCKS_PER_SEC << " (s)" << endl << endl;
	
	return 0;
}

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
