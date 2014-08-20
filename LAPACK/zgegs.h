#ifdef __cplusplus
extern "C" void zgegs_(
	const char &jobvsl,		// (input)
	const char &jobvsr,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *alpha,		// alpha[n] (output)
	complex<double> *beta,		// beta[n] (output)
	complex<double> *vsl,		// vsl[n][ldvsl] (output)
	const int &ldvsl,		// (input)
	complex<double> *vsr,		// vsr[n][ldvsr] (output)
	const int &ldvsr,		// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgegs_(
	const char *jobvsl,		/* (input) */
	const char *jobvsr,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *alpha,		/* alpha[n] (output) */
	complex_double *beta,		/* beta[n] (output) */
	complex_double *vsl,		/* vsl[n][ldvsl] (output) */
	const int *ldvsl,		/* (input) */
	complex_double *vsr,		/* vsr[n][ldvsr] (output) */
	const int *ldvsr,		/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

