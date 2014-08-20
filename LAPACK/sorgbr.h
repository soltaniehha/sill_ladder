#ifdef __cplusplus
extern "C" void sorgbr_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *tau,		// tau[?] (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sorgbr_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *tau,		/* tau[?] (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

