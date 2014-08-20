#ifdef __cplusplus
extern "C" int ilaenv_(
	const int &ispec,		// (input)
	const char *name,		// (input)
	const char *opts,		// (input)
	const int &n1,			// (input)
	const int &n2,			// (input)
	const int &n3,			// (input)
	const int &n4,			// (input)
	ftnlen length_name,		// Length of string name
	ftnlen length_opts		// Length of string opts
	);
#else /* ! __cplusplus */
int ilaenv_(
	const int *ispec,		/* (input) */
	const char *name,		/* (input) */
	const char *opts,		/* (input) */
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	const int *n3,			/* (input) */
	const int *n4,			/* (input) */
	ftnlen length_name,		/* Length of string name */
	ftnlen length_opts		/* Length of string opts */
	);
#endif /* ! __cplusplus */

