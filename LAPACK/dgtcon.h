#ifdef __cplusplus
extern "C" void dgtcon_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const double *dl,		// dl[n-1] (input)
	const double *d,		// d[n] (input)
	const double *du,		// du[n-1] (input)
	const double *du2,		// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	double *work,			// work[2*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgtcon_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const double *dl,		/* dl[n-1] (input) */
	const double *d,		/* d[n] (input) */
	const double *du,		/* du[n-1] (input) */
	const double *du2,		/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[2*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

