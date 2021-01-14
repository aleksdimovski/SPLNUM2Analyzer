features int[0,5] A1;
features int[0,5] A2;

int main(void) {

  int w, x, y, z;
  #if (A1<2) w=[-32768,-1]; #else w=[1,32767]; #endif	

  x = w;
  y = w+1;
  #if (A2<2*A1) z=x; #else z=x+1; #endif

  while (__VERIFIER_nondet_uint()) {
      ++w; 
	  ++x;
  }
  assert(y == z);
  return 0;
}
