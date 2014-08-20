#ifdef __cplusplus
extern "C" void ztrsen_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	complex<double> *t,		// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<double> *w,		// w[?] (output)
	int &m,				// (output)
	double &s,			// (output)
	double &sep,			// (output)
	complex<double> *work,		// work[lwork] (workspace)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztrsen_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	complex_double *t,		/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_double *w,		/* w[?] (output) */
	int *m,				/* (output) */
	double *s,			/* (output) */
	double *sep,			/* (output) */
	complex_double *work,		/* work[lwork] (workspace) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

