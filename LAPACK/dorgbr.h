#ifdef __cplusplus
extern "C" void dorgbr_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *tau,		// tau[?] (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dorgbr_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[?] (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

