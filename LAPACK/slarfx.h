#ifdef __cplusplus
extern "C" void slarfx_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *v,			// v[?] (input)
	const float &tau,		// (input)
	float *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
void slarfx_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *v,			/* v[?] (input) */
	const float *tau,		/* (input) */
	float *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

