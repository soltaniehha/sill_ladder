#ifdef __cplusplus
extern "C" void slaset_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float &alpha,		// (input)
	const float &beta,		// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void slaset_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *alpha,		/* (input) */
	const float *beta,		/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

