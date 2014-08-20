#ifdef __cplusplus
extern "C" void dsbgst_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	double *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	const double *bb,		// bb[n][ldbb] (input)
	const int &ldbb,		// (input)
	double *x,			// x[n][ldx] (output)
	const int &ldx,			// (input)
	double *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsbgst_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	double *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	const double *bb,		/* bb[n][ldbb] (input) */
	const int *ldbb,		/* (input) */
	double *x,			/* x[n][ldx] (output) */
	const int *ldx,			/* (input) */
	double *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

