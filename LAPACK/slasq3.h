#ifdef __cplusplus
extern "C" void slasq3_(
	int &n,				// (input/output)
	float *q,			// q[n] (input/output)
	float *e,			// e[n] (input/output)
	float *qq,			// qq[n] (input/output)
	float *ee,			// ee[n] (input/output)
	float &sup,			// (input/output)
	float &sigma,			// (input/output)
	int &kend,			// (input/output)
	int &off,			// (input/output)
	int &iphase,			// (input/output)
	const int &iconv,		// (input)
	const float &eps,		// (input)
	const float &tol2,		// (input)
	const float &small2		// (input)
	);
#else /* ! __cplusplus */
void slasq3_(
	int *n,				/* (input/output) */
	float *q,			/* q[n] (input/output) */
	float *e,			/* e[n] (input/output) */
	float *qq,			/* qq[n] (input/output) */
	float *ee,			/* ee[n] (input/output) */
	float *sup,			/* (input/output) */
	float *sigma,			/* (input/output) */
	int *kend,			/* (input/output) */
	int *off,			/* (input/output) */
	int *iphase,			/* (input/output) */
	const int *iconv,		/* (input) */
	const float *eps,		/* (input) */
	const float *tol2,		/* (input) */
	const float *small2		/* (input) */
	);
#endif /* ! __cplusplus */

