/*
 * Date: 2012-02-18
 * Author: heizmann@informatik.uni-freiburg.de
 *
 */
features int[0,4] A1;
features int[0,4] A2;
features int[0,4] A3;

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int x, y, oldx;
	x = __VERIFIER_nondet_int();
	y = __VERIFIER_nondet_int();

	#if (A1<2) x=[-10,-1]; #else x=[0,32767]; #endif
  	#if (A2<2) y=[-10,-1]; #else y=[0,32767]; #endif	
	#if (A3==0) {x=[-10,-1]; y=[2,32767];} #endif
	
	
	while (x >= 0 && y >= 0) {
		oldx = x;
		x = y - 1;
		y = oldx - 1;
	}
	return 0;
}
