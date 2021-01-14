/* features int[0,2] A1;
features int[0,2] A2;
features int[0,2] A3;
features int[0,2] A4;
features int[0,2] A5;
features int[0,2] A6;
features int[0,2] A7; */

int main() {
  int i=0;

  #if (A1) i=i+1; #else i=0; #endif
  #if (A2) i=i+1; #else i=0; #endif
  #if (A3) i=i+1; #else i=0; #endif
  #if (A4) i=i+1; #else i=0; #endif
  #if (A5) i=i+1; #else i=0; #endif
  #if (A6) i=i+1; #else i=0; #endif
  #if (A7) i=i+1; #else i=0; #endif
	
  return 0;
}