#ifdef __cplusplus
extern "C" void dpbsv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const int &nrhs,		// (input)
	double *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dpbsv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const int *nrhs,		/* (input) */
	double *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

