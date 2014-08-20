#ifdef __cplusplus
extern "C" void chetrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	complex<float> *tau,		// tau[n-1] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chetrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	complex_float *tau,		/* tau[n-1] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

