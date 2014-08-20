#ifdef __cplusplus
extern "C" void zlaqsb_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *s,			// s[n] (output)
	const double &scond,		// (input)
	const double &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void zlaqsb_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *s,			/* s[n] (output) */
	const double *scond,		/* (input) */
	const double *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

