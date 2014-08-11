#include <stdio.h>
#include <string.h>

char track[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

void find_track(char search_for[]){
  int i;
  for(i = 0; i < 5; i++)
    if(strstr(track[i], search_for))
      printf("Track %i: '%s'\n", i, track[i]);
}

int main()
{
  char search_for[80];
  printf("Search for: ");
  fgets(search_for, 80, stdin);//会在字符串结尾自动加\0
  printf("%s", search_for);
  printf("%i\n", (int)strlen(search_for));
  search_for[strlen(search_for)-1] = '\0';

  find_track(search_for);
  return 0;
}
