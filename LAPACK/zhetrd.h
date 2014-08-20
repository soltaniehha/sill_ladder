#ifdef __cplusplus
extern "C" void zhetrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	complex<double> *tau,		// tau[n-1] (output)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhetrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	complex_double *tau,		/* tau[n-1] (output) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

