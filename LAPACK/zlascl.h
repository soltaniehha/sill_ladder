#ifdef __cplusplus
extern "C" void zlascl_(
	const char &type,		// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const double &cfrom,		// (input)
	const double &cto,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[m][lda] (input/output)
	const int &lda,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlascl_(
	const char *type,		/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const double *cfrom,		/* (input) */
	const double *cto,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

