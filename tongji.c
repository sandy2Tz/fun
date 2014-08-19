#include <stdio.h>


#define MAXSIZE 100

int main()
{
  char str[MAXSIZE];
  fgets(str, sizeof(str), stdin);
  int numcount=0, alpcount = 0, spacecount = 0, othercount = 0, i;
  
  for(i=0;str[i]!='\0';i++)
    {
      if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	alpcount++;
      else if(str[i]==' ')
	spacecount++;
      else if(str[i]>='0'&& str[i]<='9')
	numcount++;
      else
	othercount++;
    } 
  printf("Alphbat: %i\tSpace: %i\tNumber: %i\tOther: %i\n",alpcount,spacecount,numcount,othercount);
  return 0;

}
