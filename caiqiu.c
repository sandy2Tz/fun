#include <stdio.h>

int main()
{
  int i,j;
  printf("time  redball  whiteball blackball\n");
  int count = 1;
  for(i=0;i<=3;i++)
    for(j=0;j<=3;j++)
      {
	if(8-i-j<=6)
	  {
	    printf("%4d:%8d %8d %8d\n",count++,i,j,8-i-j);
	  }
      }
  return 0;
}
