#ifdef __cplusplus
extern "C" void dsptrs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	const int *ipiv,		// ipiv[n] (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsptrs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

