#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

int main(){
  struct node *head, *p, *q, *t;
  
  int i,n,a;
  scanf("%d",&n);
  head = NULL;

  for(i = 0; i < n; i++){
    scanf("%d",&a);
    p = (struct node*)malloc(sizeof(struct node));
    p->data = a;
    p->next = NULL;
    
    if(head == NULL) //如果是头
      {
	head = p;	
      }
    else
      {
	q->next = p;
      }
    q = p;
  }
  
  t = head;
  while(t!=NULL)
    {
      printf("%d ",t->data);
      t = t->next;
    }
  int temp;
  scanf("%d", &temp);
  t = head;
  while(t != NULL)
    {
      if(t->next->data > temp)
	{
	  p = (struct node*)malloc(sizeof(struct node));
	  p->data = temp;
	  p->next = t->next;
	  t->next = p;
	  break;
	}
      t = t->next;
    }
  t = head;
  while(t!=NULL)
    {
      printf("%d ",t->data);
      t = t->next;
    }
  return 0;
}
