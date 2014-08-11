#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char line[80];
  int index = 0;
  char String[200];
  if(argc!=6){
    fprintf(stderr, "You need to give 5 arguments\n");
    return 1;
  }
  FILE *in = fopen("spooky.csv","r");
  fgets(String, 200, in);
  char *Sp = String;
  while(*(Sp++)!= EOF)
    puts(Sp);
  FILE *file1 = fopen(argv[2],"w");
  FILE *file2 = fopen(argv[5],"w");
  FILE *file3 = fopen(argv[4],"w");
  
  while(fscanf(in, "%79[^\n]\n", line) == 1){
    if(strstr(line,argv[1]))
      fprintf(file1, "%s\n", line);
    else if(strstr(line, argv[3]))
      fprintf(file3, "%s\n", line);
    else
      fprintf(file2, "%s\n", line);
  }
  fclose(file1);
  fclose(file2);
  fclose(file3);

}
