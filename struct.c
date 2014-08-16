#include <stdio.h>
struct S{
  int i;
  int *p;
};


int max(int, int);
int main(){
  int max(int, int);
  int (*p)(int, int) = &max;




  struct S s;
  int *p = &s.i;
  p[0] = 4;
  p[1] = 3;
  printf("%d, %d\n",s.i, *s.p);
  s.p = p;
  s.p[1] = 1;
  s.p[0] = 2;
  printf("%d, %d\n",s.i, *s.p);
}
