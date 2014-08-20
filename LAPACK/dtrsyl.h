#ifdef __cplusplus
extern "C" void dtrsyl_(
	const char &trana,		// (input)
	const char &tranb,		// (input)
	const int &isgn,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *a,		// a[m][lda] (input)
	const int &lda,			// (input)
	const double *b,		// b[n][ldb] (input)
	const int &ldb,			// (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double &scale,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtrsyl_(
	const char *trana,		/* (input) */
	const char *tranb,		/* (input) */
	const int *isgn,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[m][lda] (input) */
	const int *lda,			/* (input) */
	const double *b,		/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *scale,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

