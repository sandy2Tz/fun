#include <stdio.h>

int main()
{
  int i,j,hun,ten,data;
  for(i=100;i<=999;i++)
    {
      j = 10;
      while(j*j<=i)
	{
	  if(j*j==i)
	    {
	      data = i%10;
	      ten = (i/10)%10;
	      hun = i/100;
	      if(data == ten || ten == hun || data == hun)
		printf("%5i\n", i);
	    }
	  j++;
	}
    }
}
