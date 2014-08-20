#ifdef __cplusplus
extern "C" void ztrsyl_(
	const char &trana,		// (input)
	const char &tranb,		// (input)
	const int &isgn,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[m][lda] (input)
	const int &lda,			// (input)
	const complex<double> *b,	// b[n][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double &scale,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztrsyl_(
	const char *trana,		/* (input) */
	const char *tranb,		/* (input) */
	const int *isgn,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[m][lda] (input) */
	const int *lda,			/* (input) */
	const complex_double *b,	/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *scale,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

