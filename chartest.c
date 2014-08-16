#include <stdio.h>

int main()
{
  char *str = "helloworld";
  char des[] = str;
  des[1] = 't';
  puts(des);
  return 0;
}
