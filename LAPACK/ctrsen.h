#ifdef __cplusplus
extern "C" void ctrsen_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	complex<float> *t,		// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<float> *w,		// w[?] (output)
	int &m,				// (output)
	float &s,			// (output)
	float &sep,			// (output)
	complex<float> *work,		// work[lwork] (workspace)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrsen_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	complex_float *t,		/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_float *w,		/* w[?] (output) */
	int *m,				/* (output) */
	float *s,			/* (output) */
	float *sep,			/* (output) */
	complex_float *work,		/* work[lwork] (workspace) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

