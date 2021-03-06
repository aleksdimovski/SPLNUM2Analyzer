features int[0,5] A1;
features int[0,5] A2;

int main( int argc){
	int LARGE_INT = 1000000;
  int n,l,r,i,j;

  n = __VERIFIER_nondet_int();
	
  #if (A1<2) n=[-32768,-2]; #else n=[-2,0]; #endif
  #if (A1==2 && A2<2) n=[2,32767]; #endif	
	
  if (!(1 <= n && n <= LARGE_INT)) return 0;


  l = n/2 + 1;
  r = n;
  if(l>1) {
    l--;
  } else {
    r--;
  }
  while(r > 1) {
    i = l;
    j = 2*l;
    while(j <= r) {
      if( j < r) {
	assert(1 <= j);
	assert(j <= n);
	assert(1 <= j+1);
	assert(j+1 <= n);
	if( __VERIFIER_nondet_int() )
	  j = j + 1;
      }
      assert(1 <= j);
      assert(j <= n);
      if( __VERIFIER_nondet_int() ) { 
      	break;
      }
      assert(1 <= i);
      assert(i <= n);
      assert(1 <= j);
      assert(j <= n);
      i = j;
      j = 2*j;
    }
    if(l > 1) {
      assert(1 <= l);
      assert(l <= n);
      l--;
    } else {
      assert(1 <= r);
      assert(r <= n);
      r--;
    }
  }
  return 0;
}

