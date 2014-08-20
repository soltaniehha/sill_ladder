#ifdef __cplusplus
extern "C" void sstebz_(
	const char &range,		// (input)
	const char &order,		// (input)
	const int &n,			// (input)
	const float &vl,		// (input)
	const float &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const float &abstol,		// (input)
	const float *d,			// d[n] (input)
	const float *e,			// e[n-1] (input)
	int &m,				// (output)
	int &nsplit,			// (output)
	float *w,			// w[n] (output)
	int *iblock,			// iblock[n] (output)
	int *isplit,			// isplit[n] (output)
	float *work,			// work[4*n] (workspace)
	int *iwork,			// iwork[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sstebz_(
	const char *range,		/* (input) */
	const char *order,		/* (input) */
	const int *n,			/* (input) */
	const float *vl,		/* (input) */
	const float *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const float *abstol,		/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e,			/* e[n-1] (input) */
	int *m,				/* (output) */
	int *nsplit,			/* (output) */
	float *w,			/* w[n] (output) */
	int *iblock,			/* iblock[n] (output) */
	int *isplit,			/* isplit[n] (output) */
	float *work,			/* work[4*n] (workspace) */
	int *iwork,			/* iwork[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

