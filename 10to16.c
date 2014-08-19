#include <stdio.h>



void tento16(int n)
{
  int arr[100];
  int i = 0;
  int j = 0;
  do{  
    i = n % 16;
    n = n / 16;
    arr[j] = i;
    j++;
  }while(n < 16);
  for(i=0; i<j; i++)
    printf("%i\n",arr[j]);
}
int main()
{
  int i = 135;
  tento16(i);
  return 0;
}
