#ifdef __cplusplus
extern "C" void dorm2r_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const double *a,		// a[k][lda] (input)
	const int &lda,			// (input)
	const double *tau,		// tau[k] (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dorm2r_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const double *a,		/* a[k][lda] (input) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[k] (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

