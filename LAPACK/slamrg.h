#ifdef __cplusplus
extern "C" void slamrg_(
	const int &n1,			// (input)
	const int &n2,			// (input)
	const float *a,			// a[n1+n2] (input)
	const int &strd1,		// (input)
	const int &strd2,		// (input)
	int *index			// index[n1+n2] (output)
	);
#else /* ! __cplusplus */
void slamrg_(
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	const float *a,			/* a[n1+n2] (input) */
	const int *strd1,		/* (input) */
	const int *strd2,		/* (input) */
	int *index			/* index[n1+n2] (output) */
	);
#endif /* ! __cplusplus */

