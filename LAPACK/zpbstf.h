#ifdef __cplusplus
extern "C" void zpbstf_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zpbstf_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

