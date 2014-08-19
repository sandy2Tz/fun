#include <stdio.h>

int main()
{
  int day = 9;
  int x = 1;

  while(day>0)
    {      
      x = (x+1)*2;
      day--;
    }
  printf("%i\n",x);
}
