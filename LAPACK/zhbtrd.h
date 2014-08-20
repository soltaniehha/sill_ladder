#ifdef __cplusplus
extern "C" void zhbtrd_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<double> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhbtrd_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_double *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

