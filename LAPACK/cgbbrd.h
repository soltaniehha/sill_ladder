#ifdef __cplusplus
extern "C" void cgbbrd_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &ncc,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *d,			// d[min(m,n)] (output)
	float *e,			// e[min(m,n)-1] (output)
	complex<float> *q,		// q[m][ldq] (output)
	const int &ldq,			// (input)
	complex<float> *pt,		// pt[n][ldpt] (output)
	const int &ldpt,		// (input)
	complex<float> *c,		// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work,		// work[max(m,n)] (workspace)
	float *rwork,			// rwork[max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgbbrd_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *ncc,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *d,			/* d[min(m,n)] (output) */
	float *e,			/* e[min(m,n)-1] (output) */
	complex_float *q,		/* q[m][ldq] (output) */
	const int *ldq,			/* (input) */
	complex_float *pt,		/* pt[n][ldpt] (output) */
	const int *ldpt,		/* (input) */
	complex_float *c,		/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work,		/* work[max(m,n)] (workspace) */
	float *rwork,			/* rwork[max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

