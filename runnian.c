#include <stdio.h>

int main()
{
  int x;
  scanf("%i",&x);
  if(((x%4==0)&&(x%100!=0))||x%400==0)
    printf("%i is runnian\n",x);
  else
    printf("%i is not run nian\n",x);

  return 0;
}
