#ifdef __cplusplus
extern "C" void zgbbrd_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &ncc,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *d,			// d[min(m,n)] (output)
	double *e,			// e[min(m,n)-1] (output)
	complex<double> *q,		// q[m][ldq] (output)
	const int &ldq,			// (input)
	complex<double> *pt,		// pt[n][ldpt] (output)
	const int &ldpt,		// (input)
	complex<double> *c,		// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work,		// work[max(m,n)] (workspace)
	double *rwork,			// rwork[max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgbbrd_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *ncc,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *d,			/* d[min(m,n)] (output) */
	double *e,			/* e[min(m,n)-1] (output) */
	complex_double *q,		/* q[m][ldq] (output) */
	const int *ldq,			/* (input) */
	complex_double *pt,		/* pt[n][ldpt] (output) */
	const int *ldpt,		/* (input) */
	complex_double *c,		/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work,		/* work[max(m,n)] (workspace) */
	double *rwork,			/* rwork[max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

