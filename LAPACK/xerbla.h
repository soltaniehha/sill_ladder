#ifdef __cplusplus
extern "C" int xerbla_(
	const char srname[6],		// (input)
	const int &info,		// (input)
	ftnlen length_srname		// Length of string srname
	);
#else /* ! __cplusplus */
int xerbla_(
	const char srname[6],		// (input)
	const int *info,		// (input)
	ftnlen length_srname		// Length of string srname
	);
#endif /* ! __cplusplus */

