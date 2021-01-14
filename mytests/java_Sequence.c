features int[0,4] A1;
features int[0,4] A2;

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i, j;
    int c;
    c = 0;
		
  	#if (A1<2) c=c+1; #else c=c-1; #endif
  	#if (A2<2) c=c+1; #else c=c-1; #endif		
	
    i = 0;
    while (i < 100) {
        c = c + 1;
        i = i + 1;
    }
    j = 5;
    while (j < 21) {
        c = c + 1;
        j = j + 3;
    }
    return 0;
}
