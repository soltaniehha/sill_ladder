#ifdef __cplusplus
extern "C" void zhbgst_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	const complex<double> *bb,	// bb[n][ldbb] (input)
	const int &ldbb,		// (input)
	complex<double> *x,		// x[n][ldx] (output)
	const int &ldx,			// (input)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhbgst_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	const complex_double *bb,	/* bb[n][ldbb] (input) */
	const int *ldbb,		/* (input) */
	complex_double *x,		/* x[n][ldx] (output) */
	const int *ldx,			/* (input) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

