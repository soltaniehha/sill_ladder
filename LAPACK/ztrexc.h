#ifdef __cplusplus
extern "C" void ztrexc_(
	const char &compq,		// (input)
	const int &n,			// (input)
	complex<double> *t,		// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const int &ifst,		// (input)
	const int &ilst,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztrexc_(
	const char *compq,		/* (input) */
	const int *n,			/* (input) */
	complex_double *t,		/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const int *ifst,		/* (input) */
	const int *ilst,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

