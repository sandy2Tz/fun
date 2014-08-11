#include <stdio.h>

int main(){
  int bucket[1001],n,i,t,j;
  
  for(i = 1; i<=1000; i++)
    bucket[i]=0;
  
  scanf("%d",&n);
  for(i = 1; i <= n; i++){
    scanf("%d",&t);
    bucket[t] = 1;
  }
  for(i = 1; i<= 1000; i++)
    for(j = 1; j <= bucket[i])
    if(bucket[i] == 1)
      printf("%d ", i);
  getchar();
  getchar();
}
