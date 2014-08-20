#ifdef __cplusplus
extern "C" void chetd2_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	complex<float> *tau,		// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chetd2_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	complex_float *tau,		/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

