#include <stdio.h>

int main()
{
  int x,y,z;
  int i;
  scanf("%d",&i);

  for(x=1;x<10;x++)
    for(y=1;y<10;y++)
      for(z=0;z<10;z++)
	{
	  if( x*100+y*10+z + y*100+z*10+z == i){
	    printf("%i + %i =%i \n", x*100+y*10+z,y*100+z*10+z,i);
	    printf("xyz + yzz = %i\n",i);
	    printf("x = %i, y = %i, z = %i\n",x ,y ,z);
	  }
	}
}
