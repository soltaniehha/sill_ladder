#ifdef __cplusplus
extern "C" void dlabad_(
	double &small,			// (input/output)
	double &large			// (input/output)
	);
#else /* ! __cplusplus */
void dlabad_(
	double *small,			/* (input/output) */
	double *large			/* (input/output) */
	);
#endif /* ! __cplusplus */

