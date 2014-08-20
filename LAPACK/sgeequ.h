#ifdef __cplusplus
extern "C" void sgeequ_(
	const int &m,			// (input)
	const int &n,			// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	float *r,			// r[m] (output)
	float *c,			// c[n] (output)
	float &rowcnd,			// (output)
	float &colcnd,			// (output)
	float &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgeequ_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *r,			/* r[m] (output) */
	float *c,			/* c[n] (output) */
	float *rowcnd,			/* (output) */
	float *colcnd,			/* (output) */
	float *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

