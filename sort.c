#include <stdio.h>
#include <string.h>
void sort(char *str[], int n)
{
  int i,j;
  char *temp;
  for(i=0;i<n;i++)
    for(j=i;j<n;j++)
      {
	if(strcmp(str[i],str[j])>0)
	  {
	    temp = str[i];
	    str[i] = str[j];
	    str[j] = temp;
	  }
      }
}


int main()
{
  int n = 5;
  int i;
  char **p;
  char *str[]={
    "hello","world","ABC","DDE","FESGdsfdsfafafafafafasfasfas"
  };
  p = str;
  sort(p,5);
  for(i=0;i<5;i++)
    printf("%s\n",str[i]);
}
