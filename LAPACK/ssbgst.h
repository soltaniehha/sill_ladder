#ifdef __cplusplus
extern "C" void ssbgst_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	const float *bb,		// bb[n][ldbb] (input)
	const int &ldbb,		// (input)
	float *x,			// x[n][ldx] (output)
	const int &ldx,			// (input)
	float *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssbgst_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	const float *bb,		/* bb[n][ldbb] (input) */
	const int *ldbb,		/* (input) */
	float *x,			/* x[n][ldx] (output) */
	const int *ldx,			/* (input) */
	float *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

