#ifdef __cplusplus
extern "C" void sgbequ_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	float *r,			// r[m] (output)
	float *c,			// c[n] (output)
	float &rowcnd,			// (output)
	float &colcnd,			// (output)
	float &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgbequ_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	float *r,			/* r[m] (output) */
	float *c,			/* c[n] (output) */
	float *rowcnd,			/* (output) */
	float *colcnd,			/* (output) */
	float *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

