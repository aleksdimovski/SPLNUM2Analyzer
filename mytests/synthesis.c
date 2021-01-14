features int[0,5] A;

int main() {
  	int x = [1,32767], i;
	#if (A==0) i=0; #else #if (A==1) i=1; #else #if (A==2) i=2; #else #if (A==3) i=3; #else #if (A==4) i=4; #else #if (A==5) i=5; #endif #endif #endif #endif #endif #endif
	int y=x*i;
	assert(y<x+x);
  return 0;
}