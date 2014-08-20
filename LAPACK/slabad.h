#ifdef __cplusplus
extern "C" void slabad_(
	float &small,			// (input/output)
	float &large			// (input/output)
	);
#else /* ! __cplusplus */
void slabad_(
	float *small,			/* (input/output) */
	float *large			/* (input/output) */
	);
#endif /* ! __cplusplus */

