#include <stdio.h>

void merge(int arrA[], int arrB[], int lastA, int lastB){
  int indexA = lastA - 1;
  int indexB = lastB - 1;
  
  int indexMerged = lastA + lastB - 1;
  
  while(indexA>=0 && indexB>=0){
    if(arrA[indexA] > arrB[indexB]){
      arrA[indexMerged] = arrA[indexA];
      indexA--;
      indexMerged--;
    }
    else{
      arrA[indexMerged] = arrB[indexB];
      indexB--;
      indexMerged--;
    }
  }
  while(indexB >= 0){
    arrA[indexMerged] = arrB[indexB];
    indexB--;
    indexMerged--;
  }

}
