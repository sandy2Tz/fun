#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
  int i,n,sum = 0;
  double x,y;
  scanf("%d",&n);
  srand(time(NULL));
  for(int i = 1; i < n; i++)
    {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      if( (x*x + y*y) <= 1)
	sum++;
    }
  printf("the frequency is :%f\n",(double)4*sum/n); //注意类型转换
}
