#ifdef __cplusplus
extern "C" void slasq4_(
	const int &n,			// (input)
	const float *q,			// q[n] (input)
	const float *e,			// e[n] (input)
	float &tau,			// (output)
	float &sup			// (input/output)
	);
#else /* ! __cplusplus */
void slasq4_(
	const int *n,			/* (input) */
	const float *q,			/* q[n] (input) */
	const float *e,			/* e[n] (input) */
	float *tau,			/* (output) */
	float *sup			/* (input/output) */
	);
#endif /* ! __cplusplus */

