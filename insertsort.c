



INSERTSORT

void insertsort(element A[], int length)
{
  int i,j;
  for(i = 2; i<= length; i++)
    {
      if(A[i]<A[i-1])
	A[0] = A[i];
      for(j = i-1; A[0]<A[j]; --j)
	A[j+1]=A[j];
      A[j+1]=A[0];
    }
}



void bubblesort(element A[], int length)
{
  int i,j;
  bool flag = false;
  for(i = 0; i<length;i++)
    {
      for(j = 0; j < length - i; j++)
	{
	  if(A[j]>A[j+1])
	    {
	      swap(A,j,j+1);
	      flag = true;
	    }		
	}
      if(flag == false)
	return;
    }
}


int partition(A, left,right)
{
  int pivot = (left+right)/2;
  while(left <= right)
    {
      while(A[left] < A[pivot])
	left++;
      while(A[right] > A[pivot])
	right--;
      if(left<=right)
	{
	  swap(A,left,right);
	  left++;
	  right--;
	}
    }
  return left;
}

void quicksort(A, left ,right)
{
  int index = partition(A,left,right);
  quicksort(A,left, index-1);
  quicksort(A,index,right);
}    


