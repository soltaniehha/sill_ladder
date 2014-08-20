#ifdef __cplusplus
extern "C" void zlaqge_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *r,		// r[m] (input)
	const double *c,		// c[n] (input)
	const double &rowcnd,		// (input)
	const double &colcnd,		// (input)
	const double &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void zlaqge_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *r,		/* r[m] (input) */
	const double *c,		/* c[n] (input) */
	const double *rowcnd,		/* (input) */
	const double *colcnd,		/* (input) */
	const double *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

