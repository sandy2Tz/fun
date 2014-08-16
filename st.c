#include <stdio.h>
#include <stdlib.h>
int main(){
  char *buffer = (char *)malloc(sizeof(char));
  char bufflocal[128];
  static char buffstatic[128];
  printf("Heap Buffer: %p  ",buffer);
  printf("Local Buffer: %p  ",bufflocal);
  printf("Static Buffer: %p  ",buffstatic);
}
