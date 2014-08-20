#ifdef __cplusplus
extern "C" void sgegs_(
	const char &jobvsl,		// (input)
	const char &jobvsr,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *alphar,			// alphar[n] (output)
	float *alphai,			// alphai[n] (output)
	float *beta,			// beta[n] (output)
	float *vsl,			// vsl[n][ldvsl] (output)
	const int &ldvsl,		// (input)
	float *vsr,			// vsr[n][ldvsr] (output)
	const int &ldvsr,		// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgegs_(
	const char *jobvsl,		/* (input) */
	const char *jobvsr,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *alphar,			/* alphar[n] (output) */
	float *alphai,			/* alphai[n] (output) */
	float *beta,			/* beta[n] (output) */
	float *vsl,			/* vsl[n][ldvsl] (output) */
	const int *ldvsl,		/* (input) */
	float *vsr,			/* vsr[n][ldvsr] (output) */
	const int *ldvsr,		/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

