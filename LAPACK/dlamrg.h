#ifdef __cplusplus
extern "C" void dlamrg_(
	const int &n1,			// (input)
	const int &n2,			// (input)
	const double *a,		// a[n1+n2] (input)
	const int &dtrd1,		// (input)
	const int &dtrd2,		// (input)
	int *index			// index[n1+n2] (output)
	);
#else /* ! __cplusplus */
void dlamrg_(
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	const double *a,		/* a[n1+n2] (input) */
	const int *dtrd1,		/* (input) */
	const int *dtrd2,		/* (input) */
	int *index			/* index[n1+n2] (output) */
	);
#endif /* ! __cplusplus */

