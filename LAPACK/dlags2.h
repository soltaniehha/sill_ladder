#ifdef __cplusplus
extern "C" void dlags2_(
	const int &upper,		// (input)
	const double &a1,		// (input)
	const double &a2,		// (input)
	const double &a3,		// (input)
	const double &b1,		// (input)
	const double &b2,		// (input)
	const double &b3,		// (input)
	double &csu,			// (output)
	double &snu,			// (output)
	double &csv,			// (output)
	double &snv,			// (output)
	double &csq,			// (output)
	double &snq			// (output)
	);
#else /* ! __cplusplus */
void dlags2_(
	const int *upper,		/* (input) */
	const double *a1,		/* (input) */
	const double *a2,		/* (input) */
	const double *a3,		/* (input) */
	const double *b1,		/* (input) */
	const double *b2,		/* (input) */
	const double *b3,		/* (input) */
	double *csu,			/* (output) */
	double *snu,			/* (output) */
	double *csv,			/* (output) */
	double *snv,			/* (output) */
	double *csq,			/* (output) */
	double *snq			/* (output) */
	);
#endif /* ! __cplusplus */

