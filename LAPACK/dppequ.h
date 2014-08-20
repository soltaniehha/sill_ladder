#ifdef __cplusplus
extern "C" void dppequ_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	double *s,			// s[n] (output)
	double &scond,			// (output)
	double &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dppequ_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	double *s,			/* s[n] (output) */
	double *scond,			/* (output) */
	double *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

