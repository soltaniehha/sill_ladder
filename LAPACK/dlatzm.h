#ifdef __cplusplus
extern "C" void dlatzm_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *v,		// v[?] (input)
	const int &incv,		// (input)
	const double &tau,		// (input)
	double *c1,			// c1[?][ldc] (input/output)
	double *c2,			// c2[?][ldc] (input/output)
	const int &ldc,			// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
void dlatzm_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *v,		/* v[?] (input) */
	const int *incv,		/* (input) */
	const double *tau,		/* (input) */
	double *c1,			/* c1[?][ldc] (input/output) */
	double *c2,			/* c2[?][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

