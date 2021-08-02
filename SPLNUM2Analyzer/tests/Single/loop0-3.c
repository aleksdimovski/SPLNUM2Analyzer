//features int[0,7] A;
//features int[2,3] B;

int main() {
  int x=3;
  int y=0,B=2;
  while (x > B) {  
    x = x - 1;
	y = y + 1;
  }
  assert (y<=2);
  return 0;
}