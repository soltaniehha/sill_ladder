#ifdef __cplusplus
extern "C" void cgegs_(
	const char &jobvsl,		// (input)
	const char &jobvsr,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *alpha,		// alpha[n] (output)
	complex<float> *beta,		// beta[n] (output)
	complex<float> *vsl,		// vsl[n][ldvsl] (output)
	const int &ldvsl,		// (input)
	complex<float> *vsr,		// vsr[n][ldvsr] (output)
	const int &ldvsr,		// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgegs_(
	const char *jobvsl,		/* (input) */
	const char *jobvsr,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *alpha,		/* alpha[n] (output) */
	complex_float *beta,		/* beta[n] (output) */
	complex_float *vsl,		/* vsl[n][ldvsl] (output) */
	const int *ldvsl,		/* (input) */
	complex_float *vsr,		/* vsr[n][ldvsr] (output) */
	const int *ldvsr,		/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

