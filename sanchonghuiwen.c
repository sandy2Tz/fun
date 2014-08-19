#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool judge(long n)
{
  char s[20];
  sprintf(s,"%ld",n);
  int length = strlen(s);
  int i;
  for(i=0;i<length/2;i++)
    {
      if(s[i]!=s[--length])
	return false;      
    }
  return true;
}


int main()
{
  long n;
  int i;
  for(i=11;i<1000;i++)
    {
      if(judge(i) && judge(i*i) && judge(i*i*i))
	printf("n = %d n*n = %d n*n*n = %d\n",i,i*i,i*i*i);
      
    }
}
