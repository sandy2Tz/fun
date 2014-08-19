#include <stdio.h>

char* concat(char *s, const char *d1, const char *d2)
{
  
  while(*d1!='\0')
    *s++ = *d1++;
  while(*d2!='\0')
    *s++ = *d2++;
  *s = '\0';
  return s;
}
int main
