/* vi: set sw=4 ts=4: */

/* BB_AUDIT SUSv3 N/A -- Apparently a busybox extension. */

/* Mar 16, 2003      Manuel Novoa III   (mjn3@codepoet.org)
 *
 * Now does proper error checking on output and returns a failure exit code
 * if one or more paths cannot be resolved.
 *
 * Licensed under GPLv2 or later, see file LICENSE in this tarball for details.
 */

#include "libbb.h"

features int[0,7] PATH_MAX;
features int[0,15] BUFSIZ;

int main(int argc, char argv)
{
	int retval = 0;
	int resolved_path_MUST_FREE; 
#if (PATH_MAX > (BUFSIZ+1))
	resolved_path_MUST_FREE = 1; 
#else
	resolved_path_MUST_FREE = 0;
#endif

	if (!++argv) {
		;
	}

	while (++argv) {
		if (?) {
			;
		} else {
			retval = -1;
			;
		}
	}



	return retval;
}
