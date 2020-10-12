features int[0,6] A1;
features int[0,6] A2;


int main()
{
  int n = __VERIFIER_nondet_uint();
	
  #if (A1<2) n=[-32768,-2]; #else n=[-2,0]; #endif
  #if (A1==2 && A2<2) n=[2,32767]; #endif
	
  int x=n, y=0;
  while(x>0)
  {
    x--;
    y++;
  }
  assert(y>=n);
}

