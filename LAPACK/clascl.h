#ifdef __cplusplus
extern "C" void clascl_(
	const char &type,		// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const float &cfrom,		// (input)
	const float &cto,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[m][lda] (input/output)
	const int &lda,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void clascl_(
	const char *type,		/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const float *cfrom,		/* (input) */
	const float *cto,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

