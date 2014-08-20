#ifdef __cplusplus
extern "C" void spbtrf_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spbtrf_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

