#include <stdio.h>

int func(int num){
  int f[10] = {6,2,5,5,4,5,6,3,7,6};
  int sum = 0;
  while(num/10!=0)
    {
      sum += f[num%10];
      num = num/10;
    }
  sum += f[num];

  return sum;
}

int main()
{
  int a,b,c;
  int sum = 0;
  for(a = 0; a<=11111; a++)
    for(b = 0; b<=11111; b++){
      c = a + b;
      if(func(a)+func(b)+func(c) == 14){
	printf("%d + %d = %d\n", a, b, c);
	sum++;
      }
    }
  printf("一共拼出来:%d\n",sum);
  return 0;
}
