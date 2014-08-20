#ifdef __cplusplus
extern "C" void dlaeda_(
	const int &n,			// (input)
	const int &tlvls,		// (input)
	const int &curlvl,		// (input)
	const int &curpbm,		// (input)
	const int *prmptr,		// prmptr[n lg n] (input)
	const int *perm,		// perm[n lg n] (input)
	const int *givptr,		// givptr[n lg n] (input)
	const int *givcol,		// givcol[n lg n][2] (input)
	const double *givnum,		// givnum[n lg n][2] (input)
	const double *q,		// q[n**2] (input)
	const int *qptr,		// qptr[n+2] (input)
	double *z,			// z[n] (output)
	double *ztemp,			// ztemp[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaeda_(
	const int *n,			/* (input) */
	const int *tlvls,		/* (input) */
	const int *curlvl,		/* (input) */
	const int *curpbm,		/* (input) */
	const int *prmptr,		/* prmptr[n lg n] (input) */
	const int *perm,		/* perm[n lg n] (input) */
	const int *givptr,		/* givptr[n lg n] (input) */
	const int *givcol,		/* givcol[n lg n][2] (input) */
	const double *givnum,		/* givnum[n lg n][2] (input) */
	const double *q,		/* q[n**2] (input) */
	const int *qptr,		/* qptr[n+2] (input) */
	double *z,			/* z[n] (output) */
	double *ztemp,			/* ztemp[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

