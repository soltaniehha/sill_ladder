#ifdef __cplusplus
extern "C" void dsytd2_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	double *tau,			// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsytd2_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	double *tau,			/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

