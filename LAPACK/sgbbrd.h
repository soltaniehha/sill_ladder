#ifdef __cplusplus
extern "C" void sgbbrd_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &ncc,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *d,			// d[min(m,n)] (output)
	float *e,			// e[min(m,n)-1] (output)
	float *q,			// q[m][ldq] (output)
	const int &ldq,			// (input)
	float *pt,			// pt[n][ldpt] (output)
	const int &ldpt,		// (input)
	float *c,			// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	float *work,			// work[2*max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgbbrd_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *ncc,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *d,			/* d[min(m,n)] (output) */
	float *e,			/* e[min(m,n)-1] (output) */
	float *q,			/* q[m][ldq] (output) */
	const int *ldq,			/* (input) */
	float *pt,			/* pt[n][ldpt] (output) */
	const int *ldpt,		/* (input) */
	float *c,			/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work,			/* work[2*max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

