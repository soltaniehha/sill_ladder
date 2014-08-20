#ifdef __cplusplus
extern "C" void slaic1_(
	const int &job,			// (input)
	const int &j,			// (input)
	const float *x,			// x[j] (input)
	const float &sest,		// (input)
	const float *w,			// w[j] (input)
	const float &gamma,		// (input)
	float &sestpr,			// (output)
	float &s,			// (output)
	float &c			// (output)
	);
#else /* ! __cplusplus */
void slaic1_(
	const int *job,			/* (input) */
	const int *j,			/* (input) */
	const float *x,			/* x[j] (input) */
	const float *sest,		/* (input) */
	const float *w,			/* w[j] (input) */
	const float *gamma,		/* (input) */
	float *sestpr,			/* (output) */
	float *s,			/* (output) */
	float *c			/* (output) */
	);
#endif /* ! __cplusplus */

