#ifdef __cplusplus
extern "C" void slascl_(
	const char &type,		// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const float &cfrom,		// (input)
	const float &cto,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[m][lda] (input/output)
	const int &lda,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slascl_(
	const char *type,		/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const float *cfrom,		/* (input) */
	const float *cto,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

