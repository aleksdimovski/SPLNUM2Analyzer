	//features bool A;
features int[0,5] S1;

int main() {
  int x=0;
	
  #if (S1<=4) x=x+1; #else x=x-1; #endif;	
  #if (S1==3 || S1==4) x=x-2; #endif;
	

  return 0;
}