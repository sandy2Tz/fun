#include <stdio.h>

void shellsort(int arr[], int left, int right)
{
  int len = right - left;
  int d;
  while(d>1)
    {
      d = (d+1)/2;
      for(int i = left; i < right-d; i++)
	{
	  if(arr[i]<arr[i+d])
	    swap(arr,i,j);
	}	
    }
}

char *strcpy(char *dest, const char * src)
{
  char * temp = desc;
  assert(dest!=NULL && src!=NULL);
  while(*src != '\0')
    *dest++ = *src++;
  *dest = '\0';
  return temp;    
}



void strcpy(char *dest, const char *src)
{
  assert(dest!=NULL&&src!=NULL);
  while(*src!='\0')
    *dest++ = *src++;
  *dest = '\0';
}


void strcat(char *dest, const char *src)
{
  assert(dest!=NULL&&src!=NULL);
  while(*dest!='\0')
    dest++;
  while(*src!='\0')
    *dest++ = *src++;
   
}


int Binarysearch(int arr[], int length, int searchnode)
{  
  int left = 0, right = length-1, mid;
  while(left <= right)
    {
      mid = (left+right)/2;       
      if(searchnode == arr[mid])
	return searchnode;
      else if(searchnode < arr[mid])
	right = mid-1;
      else 
	left = mid+1;
    }
  return -1;
}


int binarysearchR(int arr[],int left, int right, int key)
{
  if(low > high)
    {
      return 0;
    }
  mid = (left + right)/2;
  if(key > arr[mid])
    binarysearchR(arr, mid+1, right, key);
  else if(key < arr[mid])
    binarysearchR(arr,left,mid-1,key);
  else
    return mid;	
}
