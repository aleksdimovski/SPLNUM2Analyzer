// Source: Thomas A. Henzinger, Thibaud Hottelier, Laura Kovacs: "Valigator:
// A verification Tool with Bound and Invariant Generation", LPAR 2008

//features int[0,5] A1;
//features int[0,5] A2;
//features int[0,5] A3;

#include "assert.h"

int main() {
    int a = __VERIFIER_nondet_int();
	int b = __VERIFIER_nondet_int();
	
  	#if (A1) a=[0,2]; #else a=[2,32767]; #endif
  	#if (A2) b=[0,2]; #else b=[2,32767]; #endif	
  	#if (A3) {a=[2,100]; b=[0,2];} #endif	
	
    
    int res, cnt;
    if (!(a <= 1000000)) return 0;
    if (!(0 <= b && b <= 1000000)) return 0;
    res = a;
    cnt = b;
    while (cnt > 0) {
	cnt = cnt - 1;
	res = res + 1;
    }
    assert(res == a + b);
    return 0;
}
