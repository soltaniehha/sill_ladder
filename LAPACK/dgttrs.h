#ifdef __cplusplus
extern "C" void dgttrs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *dl,		// dl[n-1] (input)
	const double *d,		// d[n] (input)
	const double *du,		// du[n-1] (input)
	const double *du2,		// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgttrs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *dl,		/* dl[n-1] (input) */
	const double *d,		/* d[n] (input) */
	const double *du,		/* du[n-1] (input) */
	const double *du2,		/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

