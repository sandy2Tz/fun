#include <stdio.h>

int main()
{
  int x;
  for(x=100; x<1000; x++)
    if((x%2==1) && (x%3==2) && (x%5==4) && (x%6==5) && (x%7==0))
      printf("%i\n",x);
  return 0;
}
