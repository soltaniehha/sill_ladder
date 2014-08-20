#ifdef __cplusplus
extern "C" void ssytd2_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	float *tau,			// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssytd2_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	float *tau,			/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

