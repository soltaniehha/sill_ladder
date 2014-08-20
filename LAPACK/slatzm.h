#ifdef __cplusplus
extern "C" void slatzm_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *v,			// v[?] (input)
	const int &incv,		// (input)
	const float &tau,		// (input)
	float *c1,			// c1[?][ldc] (input/output)
	float *c2,			// c2[?][ldc] (input/output)
	const int &ldc,			// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
void slatzm_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *v,			/* v[?] (input) */
	const int *incv,		/* (input) */
	const float *tau,		/* (input) */
	float *c1,			/* c1[?][ldc] (input/output) */
	float *c2,			/* c2[?][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

