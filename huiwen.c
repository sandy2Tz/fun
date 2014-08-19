#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num)
{
  int i;
  for(i=2;i<sqrt(num);i++)
    {
      if(num%i==0)
	return false;
     }
  return true;
       
}

int main()
{
  int i,m,n,o,p,s,x=0;  
  for(i=1000;i<=9999;i++)
    {
      if(isPrime(i))
	{
	  m = i%10;
	  n = (i%100)/10;
	  o = (i/100)%10;
	  p = i/1000;
	  s = m*1000+n*100+o*10+p;
	  //	  printf("%d\n",s);
	  if(isPrime(s)&&(s>i))
	    {
	      x++;
	      printf("%d\t",i);
	      if(x%5==0)
		printf("\n");
	    }
	}
    }
}
