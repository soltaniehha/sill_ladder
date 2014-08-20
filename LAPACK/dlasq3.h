#ifdef __cplusplus
extern "C" void dlasq3_(
	int &n,				// (input/output)
	double *q,			// q[n] (input/output)
	double *e,			// e[n] (input/output)
	double *qq,			// qq[n] (input/output)
	double *ee,			// ee[n] (input/output)
	double &sup,			// (input/output)
	double &sigma,			// (input/output)
	int &kend,			// (input/output)
	int &off,			// (input/output)
	int &iphase,			// (input/output)
	const int &iconv,		// (input)
	const double &eps,		// (input)
	const double &tol2,		// (input)
	const double &small2		// (input)
	);
#else /* ! __cplusplus */
void dlasq3_(
	int *n,				/* (input/output) */
	double *q,			/* q[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	double *qq,			/* qq[n] (input/output) */
	double *ee,			/* ee[n] (input/output) */
	double *sup,			/* (input/output) */
	double *sigma,			/* (input/output) */
	int *kend,			/* (input/output) */
	int *off,			/* (input/output) */
	int *iphase,			/* (input/output) */
	const int *iconv,		/* (input) */
	const double *eps,		/* (input) */
	const double *tol2,		/* (input) */
	const double *small2		/* (input) */
	);
#endif /* ! __cplusplus */

