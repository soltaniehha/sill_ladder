#ifdef __cplusplus
extern "C" void zpbsv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const int &nrhs,		// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zpbsv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

