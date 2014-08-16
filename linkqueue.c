#include <stdio.h>

typedef struct Qnode{
  int data;
  struct Qnode *next;
}Qnode, *QueuePtr;

typedef struct{
  QueuePtr front,rear;
}LinkQueue;


Status EnQueue(LinkQueue *Q, int e)
{
  QueuePtr node = (QueuePtr)malloc(sizeof(Qnode));
  if(node){
    exit(1);
  }
  node->data = e;
  Q->rear->next = node;
  Q->rear = node;
  return OK;
}


Status Dequeue(LinkQueue *Q, int *e)
{
  QueuePtr p;
  if(Q->front == Q->rear)
    return ERROR;
  p = Q->front->next;
  *e = p->data;
  Q->front->next = p->next;
  if(Q->rear = p)
    Q->rear-next = Q->front;
  free(p);
}  
  
}
