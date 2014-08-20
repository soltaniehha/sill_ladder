#ifdef __cplusplus
extern "C" void dlasq2_(
	const int &m,			// (input)
	double *q,			// q[m] (output)
	double *e,			// e[m] (workspace)
	double *qq,			// qq[m] (input/output)
	double *ee,			// ee[m] (input/output)
	const double &eps,		// (input)
	const double &tol2,		// (input)
	const double &small2,		// (input)
	double &sup,			// (input/output)
	int &kend,			// (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlasq2_(
	const int *m,			/* (input) */
	double *q,			/* q[m] (output) */
	double *e,			/* e[m] (workspace) */
	double *qq,			/* qq[m] (input/output) */
	double *ee,			/* ee[m] (input/output) */
	const double *eps,		/* (input) */
	const double *tol2,		/* (input) */
	const double *small2,		/* (input) */
	double *sup,			/* (input/output) */
	int *kend,			/* (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

