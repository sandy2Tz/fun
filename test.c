#include <stdio.h>
#include <string.h>

char album[][80] ={
  "We are the hero",
  "one two three four",
  "Wang yu's song",
  "WooLa circle song"
};

void Substring(char sub[])
{
  for(int index = 0; index < 4; index++){
    if(strstr(album[index], sub))
      printf("I found the album %d, its name is %s", index, album[index]);
  }
}
int main(){
  char search_for[80];
  printf("Enter the lyrics you want to search:\n");
  fgets(search_for, 80, stdin);
  Substring(search_for);
  return 0;
}
