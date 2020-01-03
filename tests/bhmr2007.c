// Source: Dirk Beyer, Thomas A. Henzinger, Rupak Majumdar, Andrey
// Rybalchenko: "Path Invariants", PLDI 2007.
features int[0,5] A1;
features int[0,5] A2;


#include "assert.h"
int main() {
	int LARGE_INT = 1000000;
    int i, n, a, b;
    i = 0; a = 0; b = 0; n = __VERIFIER_nondet_int();
	
  #if (A1<2) n=[-32768,-2]; #else n=[-2,0]; #endif
  #if (A1==2 && A2<2) n=[2,32767]; #endif
	
    //if (!(n >= 0 && n <= LARGE_INT)) return 0;
    while (i < n) {
        if (__VERIFIER_nondet_int()) {
            a = a + 1;
            b = b + 2;
        } else {
            a = a + 2;
            b = b + 1;
        }
        i = i + 1;
    }
    assert(a + b == 3*n);
    return 0;
}
