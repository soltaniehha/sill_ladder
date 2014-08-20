#ifdef __cplusplus
extern "C" void slag2_(
	const float *a,			// a[2][lda] (input)
	const int &lda,			// (input)
	const float *b,			// b[2][ldb] (input)
	const int &ldb,			// (input)
	const float &safmin,		// (input)
	float &scale1,			// (output)
	float &scale2,			// (output)
	float &wr1,			// (output)
	float &wr2,			// (output)
	float &wi			// (output)
	);
#else /* ! __cplusplus */
void slag2_(
	const float *a,			/* a[2][lda] (input) */
	const int *lda,			/* (input) */
	const float *b,			/* b[2][ldb] (input) */
	const int *ldb,			/* (input) */
	const float *safmin,		/* (input) */
	float *scale1,			/* (output) */
	float *scale2,			/* (output) */
	float *wr1,			/* (output) */
	float *wr2,			/* (output) */
	float *wi			/* (output) */
	);
#endif /* ! __cplusplus */

