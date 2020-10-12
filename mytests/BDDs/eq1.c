//features int[0,5] A1;
//features int[0,5] A2;

int main(void) {
  int w = __VERIFIER_nondet_uint();
  #if (A1) w=[-32768,0]; #else w=[0,32767]; #endif	
  int x = w;
		
  int y = __VERIFIER_nondet_uint();
  #if (A2) y=[-32768,0]; #else y=[0,32767]; #endif
  int z = y;
  while (__VERIFIER_nondet_uint()) {
    if (__VERIFIER_nondet_uint()) {
      ++w; ++x;
    } else {
      --y; --z;
    }
  }
  assert(w == x && y == z);
  return 0;
}
