#ifdef __cplusplus
extern "C" void zhetd2_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	complex<double> *tau,		// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhetd2_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	complex_double *tau,		/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

