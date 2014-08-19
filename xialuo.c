#include <stdio.h>

int main()
{
  float h=100,i;
  float sum = 100;
  for(i=0;i<10;i++)
    {
      h = h/2;
      sum+=h*2;
    }
  
  printf("The height of tenth rebound:%f\n",h);
  printf("The sum of height：%f\n",sum);
}
