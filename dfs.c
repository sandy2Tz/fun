#include <stdio.h>

int book[10];//用来标示扑克被否
int a[10];//盒子

void dfs(int step){
  int i;
  
  if(step == n+1)
    {
      for(i=1;i<n;i++)
	printf("%d",a[i]);
      printf("\n");

      return;//返回前一步
    }
  for(i = 1; i<=n; i++){
    if(book[i] == 0) //表示i号扑克还在手里
      {  
	a[step] = i;
	book[i] = 1;
	dfs(step+1);
	book[i] = 0;
      }
  }
}
