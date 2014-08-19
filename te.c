#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int num;
  int i;
  FILE *fp;
  if((fp = fopen("test.txt","w+"))== NULL)
    {
      printf("cannot open file\n");
      exit(0);   
    }
  for(i=0;i<10000;i++)
    {
      num = rand()%10000+1;
      fprintf(fp,"%d\t",num);
    }
  int numarray[10000];
  i = 0;
  while(fscanf(fp, "%d", &numarray[i])!=EOF)
    {
      i++;
    }
  int j = 0;
  for(;j<10000;j++){
    printf("%d\t",numarray[j]);
    if(i%10==0)
      printf("\n");
  }

    
   
}
