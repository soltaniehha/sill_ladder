#ifdef __cplusplus
extern "C" void slaqtr_(
	const int &ltran,		// (input)
	const int &lreal,		// (input)
	const int &n,			// (input)
	const float *t,			// t[n][ldt] (input)
	const int &ldt,			// (input)
	const float *b,			// b[n] (input)
	const float &w,			// (input)
	float &scale,			// (output)
	float *x,			// x[2*n] (input/output)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaqtr_(
	const int *ltran,		/* (input) */
	const int *lreal,		/* (input) */
	const int *n,			/* (input) */
	const float *t,			/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	const float *b,			/* b[n] (input) */
	const float *w,			/* (input) */
	float *scale,			/* (output) */
	float *x,			/* x[2*n] (input/output) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

