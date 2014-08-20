#ifdef __cplusplus
extern "C" void dgbbrd_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &ncc,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	double *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *d,			// d[min(m,n)] (output)
	double *e,			// e[min(m,n)-1] (output)
	double *q,			// q[m][ldq] (output)
	const int &ldq,			// (input)
	double *pt,			// pt[n][ldpt] (output)
	const int &ldpt,		// (input)
	double *c,			// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[2*max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgbbrd_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *ncc,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	double *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *d,			/* d[min(m,n)] (output) */
	double *e,			/* e[min(m,n)-1] (output) */
	double *q,			/* q[m][ldq] (output) */
	const int *ldq,			/* (input) */
	double *pt,			/* pt[n][ldpt] (output) */
	const int *ldpt,		/* (input) */
	double *c,			/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[2*max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

