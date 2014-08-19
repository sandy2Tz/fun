#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num)
{
  int i,j;
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
  for(i=100;i<200;i++)
    {
      if(isPrime(i))
	printf("%d is prime\n",i);
    }

}
