#include <stdio.h>

typedef struct SNode{
  int data[20];
  int length;
}*Seqlist;

bool delete_same(Seqlist *s)
{
  if(s->length = 0)
    return false;
  int i,j;
  for(i=0,j=1; j<s->length;j++)
    {
      if(s->data[i]!=s->data[j])
	s->data[++i]=s->data[j];      
    }
  s->length= i+1;
}

int delete_chose(Seqlist *s)
{
  if(s->length = 0)
    return false;
  int i,j,min = s->data[0],pos;
  for(i=0;i<s->length;i++)
    if(min > s->data[i])
      {
	min = s->data[i];
	pos = i;
      }
  s->data[i]=s->data[length-1];
  s->length --;
  return min;
}



