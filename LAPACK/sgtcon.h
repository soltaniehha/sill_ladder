#ifdef __cplusplus
extern "C" void sgtcon_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const float *dl,		// dl[n-1] (input)
	const float *d,			// d[n] (input)
	const float *du,		// du[n-1] (input)
	const float *du2,		// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	float *work,			// work[2*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgtcon_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const float *dl,		/* dl[n-1] (input) */
	const float *d,			/* d[n] (input) */
	const float *du,		/* du[n-1] (input) */
	const float *du2,		/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	float *work,			/* work[2*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

