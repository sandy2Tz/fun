#include <stdio.h>

int main()
{
  float score[] = {1.0, 2.4, 5.2, 23.52};
  printf("%.3f\n",*(score+1));
}
