
features int[1,4] A;

int main() {
  int x=0;
	
  #if (A*A<=9) x=x+1; #else x=x-1; #endif;	
	

  return 0;
}