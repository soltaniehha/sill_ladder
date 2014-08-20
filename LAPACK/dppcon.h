#ifdef __cplusplus
extern "C" void dppcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dppcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

