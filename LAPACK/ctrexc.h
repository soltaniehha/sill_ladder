#ifdef __cplusplus
extern "C" void ctrexc_(
	const char &compq,		// (input)
	const int &n,			// (input)
	complex<float> *t,		// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const int &ifst,		// (input)
	const int &ilst,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrexc_(
	const char *compq,		/* (input) */
	const int *n,			/* (input) */
	complex_float *t,		/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const int *ifst,		/* (input) */
	const int *ilst,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

