#include <stdio.h>

int main(){
  int i,j,k;
  int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  
  for(j=3;j>=0;j--)
    {
      i = 0;
      k = j;
      while(k<=3)
	printf("%d ",arr[i++][k++]);
      printf("\n");
    }
  for(i=1;i<=3;i++)
    {
      j = 0;
      k = i;
      while(k<=3)
	printf("%d ",arr[k++][j++]);
      printf("\n");	  
    }
  return 0;    
}
