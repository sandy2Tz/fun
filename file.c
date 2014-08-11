#include<stdio.h>

int MAX_LINE_LENGTH = 10;

int main(){
  
  char buffer[MAX_LINE_LENGTH];
  FILE *fp;
  fp = fopen("test.data","r");
  while(fgets(buffer, MAX_LINE_LENGTH, fp))
    puts(buffer);
  return 0;
}
