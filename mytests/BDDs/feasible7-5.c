features int[0,6] A1;
features int[0,6] A2;
features int[0,6] A3;
features int[0,6] A4;
features int[0,6] A5;


int main() {
  int i=0;

  #if (A1==0) i=i+1; #else i=0; #endif
  #if (A2==0) i=i+1; #else i=0; #endif
  #if (A3==0) i=i+1; #else i=0; #endif
  #if (A4==0) i=i+1; #else i=0; #endif
  #if (A5==0) i=i+1; #else i=0; #endif
	
	
  return 0;
}