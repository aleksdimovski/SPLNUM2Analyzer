features int[0,2] A1;
features int[0,2] A2;
features int[0,2] A3;
features int[0,2] A4;
features int[0,2] A5;
features int[0,2] A6;
features int[0,2] A7;
features int[0,2] A8;
features int[0,2] A9;
features int[0,2] A10;

int main() {
  int i=0;

  #if (A1==0) i=i+1; #else i=0; #endif
  #if (A2==0) i=i+1; #else i=0; #endif
  #if (A3==0) i=i+1; #else i=0; #endif
  #if (A4==0) i=i+1; #else i=0; #endif
  #if (A5==0) i=i+1; #else i=0; #endif
  #if (A6==0) i=i+1; #else i=0; #endif
  #if (A7==0) i=i+1; #else i=0; #endif
  #if (A8==0) i=i+1; #else i=0; #endif
  #if (A9==0) i=i+1; #else i=0; #endif
  #if (A10==0) i=i+1; #else i=0; #endif
	
  return 0;
}