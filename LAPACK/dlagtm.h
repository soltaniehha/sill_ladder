#ifdef __cplusplus
extern "C" void dlagtm_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double &alpha,		// (input)
	const double *dl,		// dl[n-1] (input)
	const double *d,		// d[n] (input)
	const double *du,		// du[n-1] (input)
	const double *x,		// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	const double &beta,		// (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void dlagtm_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *alpha,		/* (input) */
	const double *dl,		/* dl[n-1] (input) */
	const double *d,		/* d[n] (input) */
	const double *du,		/* du[n-1] (input) */
	const double *x,		/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	const double *beta,		/* (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

