#ifdef __cplusplus
extern "C" void strsyl_(
	const char &trana,		// (input)
	const char &tranb,		// (input)
	const int &isgn,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *a,			// a[m][lda] (input)
	const int &lda,			// (input)
	const float *b,			// b[n][ldb] (input)
	const int &ldb,			// (input)
	float *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	float &scale,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void strsyl_(
	const char *trana,		/* (input) */
	const char *tranb,		/* (input) */
	const int *isgn,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[m][lda] (input) */
	const int *lda,			/* (input) */
	const float *b,			/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	float *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *scale,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

