#include <stdio.h>


int main()
{
  float height[100];
  int n;
  scanf("%i",&n);
  int i;
  for(i=0;i<n;i++)
    scanf("%f",&height[i]);
  float sum;
  for(i=0;i<n;i++)
    {
      sum += height[i];
    }
  float average = sum/n;
  printf("The average height is %f \n", average);

}
