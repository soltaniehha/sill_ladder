#ifdef __cplusplus
extern "C" void slaqge_(
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *r,			// r[m] (input)
	const float *c,			// c[n] (input)
	const float &rowcnd,		// (input)
	const float &colcnd,		// (input)
	const float &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void slaqge_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *r,			/* r[m] (input) */
	const float *c,			/* c[n] (input) */
	const float *rowcnd,		/* (input) */
	const float *colcnd,		/* (input) */
	const float *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

