#ifdef __cplusplus
extern "C" void dlaqtr_(
	const int &ltran,		// (input)
	const int &lreal,		// (input)
	const int &n,			// (input)
	const double *t,		// t[n][ldt] (input)
	const int &ldt,			// (input)
	const double *b,		// b[n] (input)
	const double &w,		// (input)
	double &scale,			// (output)
	double *x,			// x[2*n] (input/output)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaqtr_(
	const int *ltran,		/* (input) */
	const int *lreal,		/* (input) */
	const int *n,			/* (input) */
	const double *t,		/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	const double *b,		/* b[n] (input) */
	const double *w,		/* (input) */
	double *scale,			/* (output) */
	double *x,			/* x[2*n] (input/output) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

