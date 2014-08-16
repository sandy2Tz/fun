#include <stdio.h>
#include <math.h>
int sushu(int n)
{
  int i;
  for(i = 2; i<= sqrt(n); i++)
    {
      if(n%i==0)  //非素数	
	{
	  return 1;
	}
    }
  return 0;
}

int main()
{
  int i;
  int j;
  scanf("%d",&i);
  for(j=2;j<i;j++)
    {
      if(sushu(j)==0)

	printf("%d ",j);
    }
  return 0;
}
