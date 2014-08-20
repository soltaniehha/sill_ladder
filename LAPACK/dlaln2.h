#ifdef __cplusplus
extern "C" void dlaln2_(
	const int &ltrans,		// (input)
	const int &na,			// (input)
	const int &nw,			// (input)
	const double &smin,		// (input)
	const double &ca,		// (input)
	const double *a,		// a[na][lda] (input)
	const int &lda,			// (input)
	const double &d1,		// (input)
	const double &d2,		// (input)
	const double *b,		// b[nw][ldb] (input)
	const int &ldb,			// (input)
	const double &wr,		// (input)
	const double &wi,		// (input)
	double *x,			// x[nw][ldx] (output)
	const int &ldx,			// (input)
	double &scale,			// (output)
	double &xnorm,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaln2_(
	const int *ltrans,		/* (input) */
	const int *na,			/* (input) */
	const int *nw,			/* (input) */
	const double *smin,		/* (input) */
	const double *ca,		/* (input) */
	const double *a,		/* a[na][lda] (input) */
	const int *lda,			/* (input) */
	const double *d1,		/* (input) */
	const double *d2,		/* (input) */
	const double *b,		/* b[nw][ldb] (input) */
	const int *ldb,			/* (input) */
	const double *wr,		/* (input) */
	const double *wi,		/* (input) */
	double *x,			/* x[nw][ldx] (output) */
	const int *ldx,			/* (input) */
	double *scale,			/* (output) */
	double *xnorm,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

