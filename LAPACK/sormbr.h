#ifdef __cplusplus
extern "C" void sormbr_(
	const char &vect,		// (input)
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const float *a,			// a[?][lda] (input)
	const int &lda,			// (input)
	const float *tau,		// tau[min(nq,k)] (input)
	float *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sormbr_(
	const char *vect,		/* (input) */
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const float *a,			/* a[?][lda] (input) */
	const int *lda,			/* (input) */
	const float *tau,		/* tau[min(nq,k)] (input) */
	float *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

