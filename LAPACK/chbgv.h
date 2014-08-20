#ifdef __cplusplus
extern "C" void chbgv_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<float> *bb,		// bb[n][ldbb] (input/output)
	const int &ldbb,		// (input)
	float *w,			// w[n] (output)
	complex<float> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chbgv_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_float *bb,		/* bb[n][ldbb] (input/output) */
	const int *ldbb,		/* (input) */
	float *w,			/* w[n] (output) */
	complex_float *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

