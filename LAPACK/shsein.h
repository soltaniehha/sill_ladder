#ifdef __cplusplus
extern "C" void shsein_(
	const char &side,		// (input)
	const char &eigsrc,		// (input)
	const char &initv,		// (input)
	int *select,			// select[n] (input/output)
	const int &n,			// (input)
	const float *h,			// h[n][ldh] (input)
	const int &ldh,			// (input)
	float *wr,			// wr[n] (input/output)
	const float *wi,		// wi[n] (input)
	float *vl,			// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	float *vr,			// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	float *work,			// work[(n+2)*n] (workspace)
	int *ifaill,			// ifaill[mm] (output)
	int *ifailr,			// ifailr[mm] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void shsein_(
	const char *side,		/* (input) */
	const char *eigsrc,		/* (input) */
	const char *initv,		/* (input) */
	int *select,			/* select[n] (input/output) */
	const int *n,			/* (input) */
	const float *h,			/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	float *wr,			/* wr[n] (input/output) */
	const float *wi,		/* wi[n] (input) */
	float *vl,			/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	float *vr,			/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	float *work,			/* work[(n+2)*n] (workspace) */
	int *ifaill,			/* ifaill[mm] (output) */
	int *ifailr,			/* ifailr[mm] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

