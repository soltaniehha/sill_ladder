#ifdef __cplusplus
extern "C" void dlaqgb_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	double *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *r,			// r[m] (output)
	double *c,			// c[n] (output)
	double &rowcnd,			// (output)
	double &colcnd,			// (output)
	const double &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void dlaqgb_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	double *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *r,			/* r[m] (output) */
	double *c,			/* c[n] (output) */
	double *rowcnd,			/* (output) */
	double *colcnd,			/* (output) */
	const double *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

