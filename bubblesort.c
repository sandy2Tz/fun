#include <stdio.h>

void swap(int arr[],int i, int j)
{
  arr[i] = arr[i]^arr[j];
  arr[j] = arr[i]^arr[j];
  arr[i] = arr[i]^arr[j];
}
void Bubblesort(int *array, int length){
  int i, j;
  for(i = 0; i < length; i++){
    for(j = 0; j < length - i; j++)
      if(array[j] > array[j+1]){
	swap(array, i, j);
      }
  }
}
void Selectionsort(int arr[], int length){
  int base, current;
  for(base = 0; base < length)
}
int partition(int arr[], int left, int right){
  int pivot = (left + right)/2;
  while(left <= right){
    while(arr[left] < arr[pivot])
      left++;
    while(arr[right] > arr[pivot])
      right--;
    if(left < right){
      swap(arr, left, right);
      left++;
      right--;
    }
  }
  return left;
}
void QuickSort(int arr[], int left, int right){
  int index = partition(arr, left, right);
  if(left < index-1)
    QuickSort(arr, left, index-1);
  if(right > index)
    QuickSort(arr, index, right);
}
int main(){
  int array[10] = {1,4,2,3,13,10,12,0,8,5};
  int i;
  for(i=0; i<10; i++)
    printf("%d ",array[i]);
  printf("\n");
  //  Bubblesort(array, 10);
  QuickSort(array,0,9);
  for(i=0; i<10; i++)
    printf("%d ",array[i]);
  return 0;
}
