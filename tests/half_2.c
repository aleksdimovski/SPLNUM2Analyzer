features int[0,5] A1;
features int[0,5] A2;

int main() {
  //int LARGE_INT = 1000000;
  int n,i,k;
  n = __VERIFIER_nondet_int();
	
  #if (A1<2) n=[-32768,-2]; #else n=[-2,0]; #endif
  #if (A2<A1) n=[2,32767]; #endif
	
  //if (!(n <= LARGE_INT)) return 0;
  k = n;
  i = 0;
  while( i < n ) {
    k--;
    i = i + 2;
  }

  int j = 0;
 
  while( j < n/2 ) {
    //assert(k > 0);
    k--;
    j++;
  }
  return 0;
}
