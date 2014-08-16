#include<stdio.h>

int MAX_LINE_LENGTH = 10;

void error(char *msg)
{
  fprintf(stderr, "%s: %s\n",msg, strerror(errno));
  exit(1);
}

int main(){
  
  char buffer[MAX_LINE_LENGTH];
  FILE *fp = fopen("test.data","r");
  int descriptor = fileno(fp);
  printf("%d",descriptor);
  while(fgets(buffer, MAX_LINE_LENGTH, fp))
    puts(buffer);
  return 0;
}
