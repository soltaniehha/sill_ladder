#ifdef __cplusplus
extern "C" void zgbequ_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const complex<double> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	double *r,			// r[m] (output)
	double *c,			// c[n] (output)
	double &rowcnd,			// (output)
	double &colcnd,			// (output)
	double &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgbequ_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const complex_double *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	double *r,			/* r[m] (output) */
	double *c,			/* c[n] (output) */
	double *rowcnd,			/* (output) */
	double *colcnd,			/* (output) */
	double *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

