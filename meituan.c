#include <stdio.h>

int main()
{
  int i,j;
  int sum,max;
  int arr[10] = {1,2,3,8,2,4,123,-199,14,13};
  for(i = 0; i<10; i++)
    {
      sum+=arr[i];
      if(sum<0)
	{
	  sum=0;
	  continue;
	}
      else
	{
	  if(sum>=max)
	    max = sum;	  
	}
      
    }
}



linklist nthtolast(lisknode *head, int step)
{
  linknode *p1,*p2;
  p1=head;
  p2=head;
  int i;
  for(i=0;i<step;i++)
    {
      if(p2==NULL)
	return NULL;
      p2 = p2->next;      
    }
    
  while(p2->next != NULL)
    {
      p1 = p1->next;
      p2 = p2->next;
    }
  return p1;
}


void swap(char *str)
{
  char 
}


int binarysearch(list l, int key)
{
  int low = 0, high = l.length-1, mid;
  while(low <= high)
    {
      mid = (low + high)/2;
      if(l[mid] == key)
	return mid;
      else if(l[mid]>key)
	high = mid -1;
      else 
	low = mid + 1;
    }
  return -1;
}


void parition(int arr[], int left, int right)
{
  int privot = arr[(left+right)/2];
  while(left <= right)
    {
      while(arr[left] < privot) left++;
      while(arr[right] > privot) right--;
      if(left <= right)
	{
	  swap(arr, left, right);
	  left++;
	  right--;
	}     
    }
  return left;
}


void quicksort(int arr[], int left, int right)
{
  int index = parition(arr,left,right);
  quicksort(arr,left,index-1);
  quicksort(arr,index,right);
}


void selectsort(int arr[], int length)
{
  int i,j,min;
  for(i=0;i<length-1;i++)
    {
      min = i;
      for(j=i+1;j<length-1;j++)
	  if(arr[j]<arr[min])
	    min = j;
      if(min != j)
	swap(arr,i,min);	  
    }
}

void selectsort(int arr[], int length)
{
  int i,j,min;
  for(i=0;i<length-1;i++)
    {
      min = i;
      for(j=i;j<length-1;j++)
	  if(arr[j]<arr[min])
	    min = j;
      if(i != m)
	swap(arr,i,m);
    }
}




void merge(int arr[], int low, int mid, int high)
{
  int i,j,k;
  for(k=low; k<high; k++)
    B[k] = A[k];
  for(i=low,j=mid+1,k=i; i<=mid&&j&&<=high; k++)
    {
      if(B[i]<B[j])
	A[k]=B[i];
      else
	A[k]=B[j];
    }
  while(i<=mid) A[k++] = B[i++];
  while(j<=high) A[k++] = B[j++];
}

void mergesort(int arr[], int left, int right);
{
  int mid = (left+right)/2;
  if(left < right)
    {
      mergesort(arr,left,mid);
      mergesort(arr,mid+1,right);
      merge(arr,low,mid,high);
    }
}

void insertsort(int arr[], int n)
{
  int i,j;
  for(i = 2; i < n; i++)
    {
      if(arr[i])
    }
}
