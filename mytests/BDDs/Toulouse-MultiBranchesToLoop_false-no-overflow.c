//#Termination
/*
 * Date: November 2013
 * Author: heizmann@informatik.uni-freiburg.de
 *
 * 
 */
//features int[0,4] A1;
//features int[0,4] A2;
//features int[0,4] A3;

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
	int y;
	int z;
	y = __VERIFIER_nondet_int();
	z = __VERIFIER_nondet_int();

	#if (A1) y=[-2,2]; #else y=[2,32767]; #endif
  	#if (A2) z=[-2,2]; #else z=[2,32767]; #endif		
	#if (A3) {y=[-2,2]; z=[2,32767];} #endif
	

    if (__VERIFIER_nondet_int() != 0) {
        x = 1;
    } else {
        x = -1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    if (x > 0) {
        x = x + 1;
    } else {
        x = x - 1;
    }
    while (y<100 && z<100) {
        y = y+x;
        z = z-x;
    }
    return 0;
}
