#ifdef __cplusplus
extern "C" void dladiv_(
	const double &a,		// (input)
	const double &b,		// (input)
	const double &c,		// (input)
	const double &d,		// (input)
	double &p,			// (output)
	double &q			// (output)
	);
#else /* ! __cplusplus */
void dladiv_(
	const double *a,		/* (input) */
	const double *b,		/* (input) */
	const double *c,		/* (input) */
	const double *d,		/* (input) */
	double *p,			/* (output) */
	double *q			/* (output) */
	);
#endif /* ! __cplusplus */

