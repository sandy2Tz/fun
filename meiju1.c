#include <stdio.h>

int main(){
  int i;
  for(i = 0; i <= 9; i++)
    if((i*10+3)*6528 == (30+i)*8256)
      printf("%d\n",i);
  return 0;
}
