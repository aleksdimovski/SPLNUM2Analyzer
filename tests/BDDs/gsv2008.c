// Source: Sumit Gulwani, Saurabh Srivastava, Ramarathnam Venkatesan: "Program
// Analysis as Constraint Solving", PLDI 2008.

//features int[0,4] A1;
//features int[0,4] A2;

#include "assert.h"
int main() {
	int LARGE_INT = 1000000;
    int x,y;
    x = -50;
    y = __VERIFIER_nondet_int();
	
  #if (A1) y=[-32768,-2]; #else y=[-2,2]; #endif
  #if (A2 && A3) y=[2,32767]; #endif
	
    if (!(-1000 < y && y < LARGE_INT)) return 0;
    while (x < 0) {
	x = x + y;
	y++;
    }
    assert(y > 0);
    return 0;
}
