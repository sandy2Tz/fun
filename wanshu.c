#include <stdio.h>

int main()
{
  int i,m,n,o;
  for(i=0;i<1000;i++)
    {
      m = i%10;
      n = ((i%100)/10)*10;
      o = (i/100)*100;
      if(i == m+n+o)
	printf("%d is wanshu\n",i);
     }
}
