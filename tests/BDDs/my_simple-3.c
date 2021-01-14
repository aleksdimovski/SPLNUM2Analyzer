//features bool A1;
//features bool A2;
//features bool A3;

int main() {
  int i=0;

  #if (A1) i=i+1; #endif
  #if (A2) i=i+1; #endif
  #if (A3) i=i+1; #endif

  return 0;
}