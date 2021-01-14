features int[1,4] SIZE;
features bool B;

int main() {
  int x=10;
  int y=0;
  while (x > 0) {  
    x = x - 1;
	#if (SIZE<=3) y=y+1; #else y=y-1; #endif
	#if (!B) y=0; #endif;
  }
  assert (y>1);
  return 0;
}