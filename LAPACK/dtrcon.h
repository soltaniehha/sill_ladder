#ifdef __cplusplus
extern "C" void dtrcon_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	double &rcond,			// (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtrcon_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

