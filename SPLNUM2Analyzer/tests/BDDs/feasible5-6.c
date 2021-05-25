features int[0,4] A1;
features int[0,4] A2;
features int[0,4] A3;
features int[0,4] A4;
features int[0,4] A5;
features int[0,4] A6;

int main() {
  int i=0;

  #if (A1==0) i=i+1; #else i=0; #endif
  #if (A2==0) i=i+1; #else i=0; #endif
  #if (A3==0) i=i+1; #else i=0; #endif
  #if (A4==0) i=i+1; #else i=0; #endif
  #if (A5==0) i=i+1; #else i=0; #endif
  #if (A6==0) i=i+1; #else i=0; #endif
	
	
  return 0;
}