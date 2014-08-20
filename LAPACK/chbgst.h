#ifdef __cplusplus
extern "C" void chbgst_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	const complex<float> *bb,	// bb[n][ldbb] (input)
	const int &ldbb,		// (input)
	complex<float> *x,		// x[n][ldx] (output)
	const int &ldx,			// (input)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chbgst_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	const complex_float *bb,	/* bb[n][ldbb] (input) */
	const int *ldbb,		/* (input) */
	complex_float *x,		/* x[n][ldx] (output) */
	const int *ldx,			/* (input) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

