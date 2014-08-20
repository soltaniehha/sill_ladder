#ifdef __cplusplus
extern "C" void slasq2_(
	const int &m,			// (input)
	float *q,			// q[m] (output)
	float *e,			// e[m] (workspace)
	float *qq,			// qq[m] (input/output)
	float *ee,			// ee[m] (input/output)
	const float &eps,		// (input)
	const float &tol2,		// (input)
	const float &small2,		// (input)
	float &sup,			// (input/output)
	int &kend,			// (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slasq2_(
	const int *m,			/* (input) */
	float *q,			/* q[m] (output) */
	float *e,			/* e[m] (workspace) */
	float *qq,			/* qq[m] (input/output) */
	float *ee,			/* ee[m] (input/output) */
	const float *eps,		/* (input) */
	const float *tol2,		/* (input) */
	const float *small2,		/* (input) */
	float *sup,			/* (input/output) */
	int *kend,			/* (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

