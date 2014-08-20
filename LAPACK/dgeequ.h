#ifdef __cplusplus
extern "C" void dgeequ_(
	const int &m,			// (input)
	const int &n,			// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	double *r,			// r[m] (output)
	double *c,			// c[n] (output)
	double &rowcnd,			// (output)
	double &colcnd,			// (output)
	double &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgeequ_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *r,			/* r[m] (output) */
	double *c,			/* c[n] (output) */
	double *rowcnd,			/* (output) */
	double *colcnd,			/* (output) */
	double *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

