#ifdef __cplusplus
extern "C" void sorm2r_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const float *a,			// a[k][lda] (input)
	const int &lda,			// (input)
	const float *tau,		// tau[k] (input)
	float *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	float *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sorm2r_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const float *a,			/* a[k][lda] (input) */
	const int *lda,			/* (input) */
	const float *tau,		/* tau[k] (input) */
	float *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

