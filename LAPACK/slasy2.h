#ifdef __cplusplus
extern "C" void slasy2_(
	const int &ltranl,		// (input)
	const int &ltranr,		// (input)
	const int &isgn,		// (input)
	const int &n1,			// (input)
	const int &n2,			// (input)
	const float *tl,		// tl[2][ldtl] (input)
	const int &ldtl,		// (input)
	const float *tr,		// tr[2][ldtr] (input)
	const int &ldtr,		// (input)
	const float *b,			// b[2][ldb] (input)
	const int &ldb,			// (input)
	float &scale,			// (output)
	float *x,			// x[2][ldx] (output)
	const int &ldx,			// (input)
	float &xnorm,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slasy2_(
	const int *ltranl,		/* (input) */
	const int *ltranr,		/* (input) */
	const int *isgn,		/* (input) */
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	const float *tl,		/* tl[2][ldtl] (input) */
	const int *ldtl,		/* (input) */
	const float *tr,		/* tr[2][ldtr] (input) */
	const int *ldtr,		/* (input) */
	const float *b,			/* b[2][ldb] (input) */
	const int *ldb,			/* (input) */
	float *scale,			/* (output) */
	float *x,			/* x[2][ldx] (output) */
	const int *ldx,			/* (input) */
	float *xnorm,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

