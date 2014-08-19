#include <stdio.h>

#define MAXSIZE 100
int main()
{
  char str[MAXSIZE];
  fgets(str, sizeof(str), stdin);
  int pos,length;
  scanf("%d %d", &pos, &length);
  int movpos = str[pos+length];
  int i;
  for(i=pos+length-1; str[i-1]!='\0'; i++)
    str[i-length] = str[i];
  puts(str);
  return 0;
  
}
