#include <stdio.h>

int main()
{
  int i, m = 0, n = 0;  
  srand((unsigned)time(0));
  printf("number of times: ");
  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    if(rand()%2 == 1)
      m++;
  }
  
  printf("\n the statistics of throwing %d coins: \n ", n);
  printf("the positive is %d, frequency is %.2f\n", m, (float)m/n);

  return 0;

}
