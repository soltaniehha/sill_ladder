#ifdef __cplusplus
extern "C" void dlasy2_(
	const int &ltranl,		// (input)
	const int &ltranr,		// (input)
	const int &isgn,		// (input)
	const int &n1,			// (input)
	const int &n2,			// (input)
	const double *tl,		// tl[2][ldtl] (input)
	const int &ldtl,		// (input)
	const double *tr,		// tr[2][ldtr] (input)
	const int &ldtr,		// (input)
	const double *b,		// b[2][ldb] (input)
	const int &ldb,			// (input)
	double &scale,			// (output)
	double *x,			// x[2][ldx] (output)
	const int &ldx,			// (input)
	double &xnorm,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlasy2_(
	const int *ltranl,		/* (input) */
	const int *ltranr,		/* (input) */
	const int *isgn,		/* (input) */
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	const double *tl,		/* tl[2][ldtl] (input) */
	const int *ldtl,		/* (input) */
	const double *tr,		/* tr[2][ldtr] (input) */
	const int *ldtr,		/* (input) */
	const double *b,		/* b[2][ldb] (input) */
	const int *ldb,			/* (input) */
	double *scale,			/* (output) */
	double *x,			/* x[2][ldx] (output) */
	const int *ldx,			/* (input) */
	double *xnorm,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

