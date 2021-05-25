	//features bool A;
//features int[0,9] S1;

int main() {
  int x=0;
	
  #if (S1) x=x+1; #else x=x-1; #endif;	
  #if (S2 || S3 || S4) x=x-2; #endif;
	

  return 0;
}