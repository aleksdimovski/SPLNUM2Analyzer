//features int[0,4] A1;
//features int[0,4] A2;
//features int[0,4] A3;

int main() {
  int LARGE_INT = 1000000;
  int n0, n1;
  int i0 = 0;
  int k = 0;

  n0 = __VERIFIER_nondet_int();
  n1 = __VERIFIER_nondet_int();
	
  #if (A1) n0=[0,2]; #else n0=[2,32767]; #endif
  #if (A2) n1=[0,2]; #else n1=[2,32767]; #endif			
  #if (A3) {n0=[-10,-2]; n1=[-10,-2];} #endif
	
  if (!(-LARGE_INT <= n0 && n0 < LARGE_INT)) return 0;
  if (!(-LARGE_INT <= n1 && n1 < LARGE_INT)) return 0;

  while( i0 < n0 ) {
    i0++;
    k++;
  }

  int i1 = 0;
  while( i1 < n1 ) {
    i1++;
    k++;
  }

  int j1 = 0;
  while( j1 < n0 + n1 ) {
      assert(k > 0);
      j1++;
      k--;
  }
}
