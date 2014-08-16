#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100

typedef int Status;
typedef int SElement;

typedef struct{
  SElement data[MAXSIZE];
  int top;
}SqStack;

typedef struct StackNode{
  SElement data;
  struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack{
  LinkStackPtr top;
  int count;
}LinkStack;

Status Push(StackNode *S, SElement e)
{
  LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
  s->data = e;
  s->next = S->next;
  S->top = s;
  S->count++;
  return OK;
}

Status Push(SqStack *S, SElement e)
{
  if(s->top == MAXSIZE - 1)
    return ERROR;
  s->top++;
  s->data[top] = e;
  return OK;
}

Status Pop(SqStack *S, SElement e)
{
  if(s->top == -1)
    return ERROR;
  e = s->data[top];
  s->top--;
  return OK;
}
