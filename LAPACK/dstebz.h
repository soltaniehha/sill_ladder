#ifdef __cplusplus
extern "C" void dstebz_(
	const char &range,		// (input)
	const char &order,		// (input)
	const int &n,			// (input)
	const double &vl,		// (input)
	const double &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const double &abstol,		// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n-1] (input)
	int &m,				// (output)
	int &nsplit,			// (output)
	double *w,			// w[n] (output)
	int *iblock,			// iblock[n] (output)
	int *isplit,			// isplit[n] (output)
	double *work,			// work[4*n] (workspace)
	int *iwork,			// iwork[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dstebz_(
	const char *range,		/* (input) */
	const char *order,		/* (input) */
	const int *n,			/* (input) */
	const double *vl,		/* (input) */
	const double *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const double *abstol,		/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n-1] (input) */
	int *m,				/* (output) */
	int *nsplit,			/* (output) */
	double *w,			/* w[n] (output) */
	int *iblock,			/* iblock[n] (output) */
	int *isplit,			/* isplit[n] (output) */
	double *work,			/* work[4*n] (workspace) */
	int *iwork,			/* iwork[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

