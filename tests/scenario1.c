features int[0,9] A;
features int[0,9] B;

int main() {
  int x, y;
  #if (A<2) x=[-10,10]; #else x=[0,10]; #endif;	
  #if (A==B) y=x-1; #else y=x; #endif;
  
  if (x <= 0) y = -y; 
  assert (y>=0); 
  return 0;
}