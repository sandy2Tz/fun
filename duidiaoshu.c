#include <stdio.h>

int main()
{
  int x,y,a,b,c,d;
  scanf("%i",&x);
  if(x<10||x>99)
    printf("You need to enter double digit number\n");
  a = x%10;
  b = x/10;
  for(y=10;y<100;y++)
    {
      c = y%10;
      d = y/10;
      int m = a*10+b;
      int n = c*10+d;
      if((x+y)==(m+n))
	printf("It's OK: %i + %i = %i + %i\n",x ,y ,m ,n);
    }
  return 0;    
}
