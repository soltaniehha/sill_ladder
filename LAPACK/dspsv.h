#ifdef __cplusplus
extern "C" void dspsv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	int *ipiv,			// ipiv[n] (output)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dspsv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	int *ipiv,			/* ipiv[n] (output) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

