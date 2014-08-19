#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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
  int i;
  for(i=10;i<1000;i++)
    {
      if(isPrime(i))
	{
	  if(i/100==0){
	    if(i/10 == i%10)
	      printf("%d is reversible number\n",i);
	  }
	  else
	    {
	    if(i/100 == i%10)
	      printf("%d is reversible number\n",i);
	    }
	  
	}
    }

}
