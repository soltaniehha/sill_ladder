#ifdef __cplusplus
extern "C" void ddisna_(
	const char &job,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *d,		// d[?] (input)
	double *sep,			// sep[?] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ddisna_(
	const char *job,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *d,		/* d[?] (input) */
	double *sep,			/* sep[?] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

