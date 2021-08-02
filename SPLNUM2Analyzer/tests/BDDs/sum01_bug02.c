//features int[0,4] A1;
//features int[0,4] A2;


int main() { 
  int a = 2;
  int i, j=10, n=?, sn=0;
	
  #if (A1) n=[-32768,0]; #else n=[0,9]; #endif
  #if (A2 && A3) n=[10,32767]; #endif
	
  for(i=1; i<=n; i++) {
    if (i<j) 
    sn = sn + a;
    j--;
  }
  assert(sn==n*a || sn == 0);
}
