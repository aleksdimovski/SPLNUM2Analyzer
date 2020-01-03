/*
 * Date: 2012-02-18
 * Author: leike@informatik.uni-freiburg.de
 *
 * Ranking function: f(x, c) = x + c;
 * needs the for the lower bound to be able to depend on c.
 */
features int[0,4] A1;
features int[0,4] A2;
features int[0,4] A3;

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int c, x;
	x = __VERIFIER_nondet_int();
	c = __VERIFIER_nondet_int();

	#if (A1<2) x=[-10,-1]; #else x=[0,32767]; #endif
  	#if (A2<2) c=[-10,-1]; #else c=[0,32767]; #endif	
	#if (A3==0) {x=[-10,-1]; c=[2,32767];} #endif
	
	//prevent overflows
    if(!(-65535<=x && x<=65535)) return 0;
    if(!(-65535<=c && c<=65535)) return 0;
	if (c >= 2) {
	    while (x + c >= 0) {
		    x = x - c;
		    c = c + 1;
	    }
    }
	return 0;
}
