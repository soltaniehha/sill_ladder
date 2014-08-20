#ifdef __cplusplus
extern "C" void dpbequ_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const double *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	double *s,			// s[n] (output)
	double &scond,			// (output)
	double &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dpbequ_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const double *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	double *s,			/* s[n] (output) */
	double *scond,			/* (output) */
	double *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

