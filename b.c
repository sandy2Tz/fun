#include <stdio.h>

void bubblesort(int arr[], int length)
{
  int i, j;
  for(i=0; i< length; i++)
    for(j=0; j< length-i; j++)
      if(arr[i] > arr[j])
	swap(arr, i, j);
}
