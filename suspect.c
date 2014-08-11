#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
  char *questions;
  struct node *no;
  struct node *yes;
}node;

int yes_no(char *questions){
  char answer[3];
  printf("%s? [y/n]", questions);
  fgets(answer, 3, stdin);
  return answer[0]=='y';
}
