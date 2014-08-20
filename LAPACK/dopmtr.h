#ifdef __cplusplus
extern "C" void dopmtr_(
	const char &side,		// (input)
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *ap,		// ap[?] (input)
	const double *tau,		// tau[?] (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dopmtr_(
	const char *side,		/* (input) */
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *ap,		/* ap[?] (input) */
	const double *tau,		/* tau[?] (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

