features int[0,4] A1;
features int[0,4] A2;

int main(void) {
  int w;
	
  #if (A1<2) w=[-32768,-2]; #else w=[-2,0]; #endif
  #if (A1==2 && A2<2) w=[2,32767]; #endif
	
  int x = w;
  int y = w + 1;
  int z = x + 1;
  while (__VERIFIER_nondet_uint()) {
    y++;
    z++;
  }
  assert(y == z);
  return 0;
}
