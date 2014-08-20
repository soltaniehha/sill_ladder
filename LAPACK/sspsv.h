#ifdef __cplusplus
extern "C" void sspsv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	int *ipiv,			// ipiv[n] (output)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sspsv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	int *ipiv,			/* ipiv[n] (output) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

