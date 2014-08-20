#ifdef __cplusplus
extern "C" int lsamen_(
	const int &n,			// (input)
	const char *ca,			// (input)
	const char *cb,			// (input)
	ftnlen length_ca,		// Length of string ca
	ftnlen length_cb		// Length of string cb
	);
#else /* ! __cplusplus */
int lsamen_(
	const int *n,			/* (input) */
	const char *ca,			/* (input) */
	const char *cb,			/* (input) */
	ftnlen length_ca,		/* Length of string ca */
	ftnlen length_cb		/* Length of string cb */
	);
#endif /* ! __cplusplus */

