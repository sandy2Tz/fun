#include <stdio.h>

int main(){
  int b = 100;
  const int *a = &b;
  printf("%d\n",b);
  b = 15;
  printf("%d\n",b);
}
