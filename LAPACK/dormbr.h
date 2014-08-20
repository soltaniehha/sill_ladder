#ifdef __cplusplus
extern "C" void dormbr_(
	const char &vect,		// (input)
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const double *a,		// a[?][lda] (input)
	const int &lda,			// (input)
	const double *tau,		// tau[min(nq,k)] (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dormbr_(
	const char *vect,		/* (input) */
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const double *a,		/* a[?][lda] (input) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[min(nq,k)] (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

