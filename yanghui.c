#include <stdio.h>

int main()
{
  int i,j;
  int arr[10][10];
  for(i=1;i<10;i++)
    {
    for(j=1;j<=i;j++)
      {
	if(j==1||i==j)
	  arr[i][j]=1;
	else
	  arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
      }
    }
  for(i=1;i<10;i++){
    for(j=1;j<=i;j++)
      printf("%2d ",arr[i][j]);
    printf("\n");
  }
  return 0;
}
