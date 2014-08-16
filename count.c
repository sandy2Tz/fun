#include <stdio.h>
#include <string.h>

void histogram(char *src)
{
  int i;
  char ascii[256] = {};
  while(*src!='\0')
    ascii[*src++]++;
  int length = strlen(src);
  for(i=0;i<256;i++)
    if(ascii[i]!='\0')
      printf("%c: %d\n",i, ascii[i]);
}
int main()
{
  char *src = "aaaavsdfsdfddfadfadfadfafdsafgae";
  histogram(src);
  return 0;
}
