//features int[0,31] A;
//features int[0,31] B;

int main() {
  int x=0;
  int y=0;
  while (x > 5) {  
    x = x - 1;
	y = y + 1;
  }
  assert (y>2);
  return 0;
}