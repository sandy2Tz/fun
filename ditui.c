#include <stdio.h>

int triangle(int x)
{
  if(x == 1)
    return 1;
  return (triangle(x-1) + 3*(x-1));
}

int main(){
  
  int x = triangle(100);
  printf("%i\n",x);
  return 0;
}
