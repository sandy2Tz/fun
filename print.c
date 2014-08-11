#include<stdio.h>

int main(){
  int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  for(int i = 0; i < 4; i++){
    for(int j = 0; j <4; j++){
      printf("%d\t",array[i][j]);
    }
    printf("\n");
  }
  
  int count = 6;
  for(int i = 3; i >= 0; i--){
    for(int j = 3; j >= 0; j--){
      int m = count - i;
      if(count == (i + j))
	printf("%d\t", array[i][j]);
    }
    count--;
    printf("\n");
  }
}
