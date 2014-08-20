#ifdef __cplusplus
extern "C" void slaln2_(
	const int &ltrans,		// (input)
	const int &na,			// (input)
	const int &nw,			// (input)
	const float &smin,		// (input)
	const float &ca,		// (input)
	const float *a,			// a[na][lda] (input)
	const int &lda,			// (input)
	const float &d1,		// (input)
	const float &d2,		// (input)
	const float *b,			// b[nw][ldb] (input)
	const int &ldb,			// (input)
	const float &wr,		// (input)
	const float &wi,		// (input)
	float *x,			// x[nw][ldx] (output)
	const int &ldx,			// (input)
	float &scale,			// (output)
	float &xnorm,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaln2_(
	const int *ltrans,		/* (input) */
	const int *na,			/* (input) */
	const int *nw,			/* (input) */
	const float *smin,		/* (input) */
	const float *ca,		/* (input) */
	const float *a,			/* a[na][lda] (input) */
	const int *lda,			/* (input) */
	const float *d1,		/* (input) */
	const float *d2,		/* (input) */
	const float *b,			/* b[nw][ldb] (input) */
	const int *ldb,			/* (input) */
	const float *wr,		/* (input) */
	const float *wi,		/* (input) */
	float *x,			/* x[nw][ldx] (output) */
	const int *ldx,			/* (input) */
	float *scale,			/* (output) */
	float *xnorm,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

