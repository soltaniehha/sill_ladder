#ifdef __cplusplus
extern "C" void dgegs_(
	const char &jobvsl,		// (input)
	const char &jobvsr,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *alphar,			// alphar[n] (output)
	double *alphai,			// alphai[n] (output)
	double *beta,			// beta[n] (output)
	double *vsl,			// vsl[n][ldvsl] (output)
	const int &ldvsl,		// (input)
	double *vsr,			// vsr[n][ldvsr] (output)
	const int &ldvsr,		// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgegs_(
	const char *jobvsl,		/* (input) */
	const char *jobvsr,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *alphar,			/* alphar[n] (output) */
	double *alphai,			/* alphai[n] (output) */
	double *beta,			/* beta[n] (output) */
	double *vsl,			/* vsl[n][ldvsl] (output) */
	const int *ldvsl,		/* (input) */
	double *vsr,			/* vsr[n][ldvsr] (output) */
	const int *ldvsr,		/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

