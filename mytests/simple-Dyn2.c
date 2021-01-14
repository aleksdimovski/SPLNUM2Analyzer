/*
 * Date: 2012-02-18
 * Author: leike@informatik.uni-freiburg.de
 *
 * Ranking function: f(x, c) = x + c;
 * needs the for the lower bound to be able to depend on c.
 */
features int[0,4] A1;

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int c, x;
	x = 10;
	c = 0;

    while (x + c >= 0) {
		    x = x - c;
		    c = c + 1;
	}
	
	return 0;
}
