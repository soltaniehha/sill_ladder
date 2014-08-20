#ifdef __cplusplus
extern "C" void dlaqge_(
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *r,		// r[m] (input)
	const double *c,		// c[n] (input)
	const double &rowcnd,		// (input)
	const double &colcnd,		// (input)
	const double &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void dlaqge_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *r,		/* r[m] (input) */
	const double *c,		/* c[n] (input) */
	const double *rowcnd,		/* (input) */
	const double *colcnd,		/* (input) */
	const double *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

