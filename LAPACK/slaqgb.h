#ifdef __cplusplus
extern "C" void slaqgb_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *r,			// r[m] (output)
	float *c,			// c[n] (output)
	float &rowcnd,			// (output)
	float &colcnd,			// (output)
	const float &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void slaqgb_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *r,			/* r[m] (output) */
	float *c,			/* c[n] (output) */
	float *rowcnd,			/* (output) */
	float *colcnd,			/* (output) */
	const float *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

