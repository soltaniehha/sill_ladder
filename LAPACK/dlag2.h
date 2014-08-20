#ifdef __cplusplus
extern "C" void dlag2_(
	const double *a,		// a[2][lda] (input)
	const int &lda,			// (input)
	const double *b,		// b[2][ldb] (input)
	const int &ldb,			// (input)
	const double &safmin,		// (input)
	double &scale1,			// (output)
	double &scale2,			// (output)
	double &wr1,			// (output)
	double &wr2,			// (output)
	double &wi			// (output)
	);
#else /* ! __cplusplus */
void dlag2_(
	const double *a,		/* a[2][lda] (input) */
	const int *lda,			/* (input) */
	const double *b,		/* b[2][ldb] (input) */
	const int *ldb,			/* (input) */
	const double *safmin,		/* (input) */
	double *scale1,			/* (output) */
	double *scale2,			/* (output) */
	double *wr1,			/* (output) */
	double *wr2,			/* (output) */
	double *wi			/* (output) */
	);
#endif /* ! __cplusplus */

