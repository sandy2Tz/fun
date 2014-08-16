#include <stdio.h>

typedef struct Dlink{
  int data;
  struct Dlink *pre,*rear;
}Dnode,*Dlist;

typedef struct{
  int data;
  int next;
}Staticlist[MAXSIZE];
