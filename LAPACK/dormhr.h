#ifdef __cplusplus
extern "C" void dormhr_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	const double *a,		// a[?][lda] (input)
	const int &lda,			// (input)
	const double *tau,		// tau[?] (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dormhr_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	const double *a,		/* a[?][lda] (input) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[?] (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

