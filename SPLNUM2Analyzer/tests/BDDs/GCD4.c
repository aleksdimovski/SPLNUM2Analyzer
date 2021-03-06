//features int[0,4] A1;
//features int[0,4] A2;
//features int[0,4] A3;

typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int y;
    int tmp;
    int xtmp;
	
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
	
  	#if (A1) x=[-2,2]; #else x=[2,32767]; #endif
  	#if (A2) y=[-2,2]; #else y=[2,32767]; #endif		
	#if (A3) {x=[-2,2]; y=[2,32767];} #endif
    
    while(y > 0 && x > 0) {
        tmp = y;
        xtmp = x;
        
        while(xtmp>=y && y > 0) {
            xtmp = xtmp - y;
        }
        
        y = xtmp;
        x = tmp;
    }
    
    return 0;
}