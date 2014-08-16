#include <stdio.h>

int main(){
  unsigned char a = 0xA5;
  unsigned char b=~a>>4+1;
  
  printf("%d\n",b);
  return 0;
}
