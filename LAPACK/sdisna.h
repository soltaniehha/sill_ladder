#ifdef __cplusplus
extern "C" void sdisna_(
	const char &job,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *d,			// d[?] (input)
	float *sep,			// sep[?] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sdisna_(
	const char *job,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *d,			/* d[?] (input) */
	float *sep,			/* sep[?] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

