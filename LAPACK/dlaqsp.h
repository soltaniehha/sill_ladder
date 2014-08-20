#ifdef __cplusplus
extern "C" void dlaqsp_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	const double *s,		// s[n] (input)
	const double &scond,		// (input)
	const double &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void dlaqsp_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	const double *s,		/* s[n] (input) */
	const double *scond,		/* (input) */
	const double *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

