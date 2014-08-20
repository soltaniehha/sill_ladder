#ifdef __cplusplus
extern "C" void sladiv_(
	const float &a,			// (input)
	const float &b,			// (input)
	const float &c,			// (input)
	const float &d,			// (input)
	float &p,			// (output)
	float &q			// (output)
	);
#else /* ! __cplusplus */
void sladiv_(
	const float *a,			/* (input) */
	const float *b,			/* (input) */
	const float *c,			/* (input) */
	const float *d,			/* (input) */
	float *p,			/* (output) */
	float *q			/* (output) */
	);
#endif /* ! __cplusplus */

