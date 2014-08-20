#ifdef __cplusplus
extern "C" void zhpsv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	int *ipiv,			// ipiv[n] (output)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhpsv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

