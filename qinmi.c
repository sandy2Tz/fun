#include <stdio.h>

int main()
{
  int i,j,k,sum1,sum2;
  for(i=0;i<10000;i++)
    {
      sum1 = 0;
      sum2 = 0;
      for(j=1;j<i;j++)
	{
	  if(i%j==0)
	    sum1+=j;	  
	}
      for(k=1;k<sum1;k++)
	{
	  if(sum1%k==0)
	    sum2+=k;
	}
}
