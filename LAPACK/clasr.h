#ifdef __cplusplus
extern "C" void clasr_(
	const char &side,		// (input)
	const char &pivot,		// (input)
	const char &direct,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *c,			// c[?] (input)
	const float *s,			// s[?] (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void clasr_(
	const char *side,		/* (input) */
	const char *pivot,		/* (input) */
	const char *direct,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *c,			/* c[?] (input) */
	const float *s,			/* s[?] (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

