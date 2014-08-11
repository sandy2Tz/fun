#include<stdio.h>

void reverse(char *str){
  char tmp;
  char *end = str;
  if(str){
    while(*end)
      ++end;
    --end;
  }
  while(str < end)
    {
      tmp = *str;
      *str++ = *end;
      *end-- = tmp;
    }
}


int main(){
  char *str= "helloworld";
  reverse(str);
  printf("%s", str);
}
