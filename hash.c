#include <stdio.h>


int data[] = {22, 23, 19, 12, 37, 100, 23, 88, 42, 87};
int table_LENGTH = 10;
int hash_LENGTH = 13;



void InsertHash(int hash[], int data){
  int i = 0;
  i = data%hash_LENGTH;
  while(hash[i]!=0)
    i=(++i)%hash_LENGTH;
  hash[i] = data;
}

void CreateHash(int hash[],int data[]){
  int i;
  for(i=0; i< table_LENGTH; i++)
    InsertHash(hash, data[i]);
}

int HashSearch(int hash[], int key){
  int i = key%hash_LENGTH;
  while(hash[i] && hash[i]!=key)
    i = (++i)%hash_LENGTH;
  if(hash[i]==0)
    return -1;
  else
    return i;
}

int main(){
  int hash[13] = {0};
  CreateHash(hash, data);
  int i;
  for(i = 0; i < hash_LENGTH; i++)
    printf("%d ",hash[i]);
  printf("Enter one key\n");
  int key = 0;
  scanf("%d", &key);
  int pos = HashSearch(hash, key);
  if(pos>0)
    printf("FOUND. The position is: %d\n", pos);
  else
    printf("Failure\n");
  return 0;
}
