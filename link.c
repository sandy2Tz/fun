#include <stdio.h>

typedef struct linknode{
  int data;
  struct linknode *next;
}linknode, *linklist;


linklist create(linklist l){
  linknode *s;
  int x;
  l=(linklist)malloc(sizeof(linknode));
  l->next=NULL; //声明头结点
  scanf("%d",&x);
  while(x != 999)
    {
      s = (linklist)malloc(sizeof(linknode));
      s->data = x;
      s->next = l->next;
      l->next = s;
      scanf("%d",&x);      
    }
  return l;
}//头插法



linklist create(linknode *l)
{
  linknode *s,*r=l;
  int x;
  l = (linklist)malloc(sizeof(linknode));
  l->next = NULL;
  while(x!=999)
    {
      s = (linklist)malloc(sizeof(linknode));
      s->data =x;
      r->next = s;      
      r=s;
    }
  r->next = NULL;//最后判断
  return r;
}

linklist search(linklist l, int i)
{
  int j = 1;
  linklist s = l->next;
  if(i==0)
    return l;
  if(i<1)
    return NULL;
  while(s&&j<i)
    {
      s=s->next;
      j++;
    }
  return s;  
}

linklist search(linklist l, int i)
{
  linknode *s = l;
  while(s!=NULL&& i!=s->data)
    s=s->next;
  return s;
}

linklist insert(linklist l, int i, linknode *s)
{
  linknode *p = search(&l,i-1);
  s->next = p->next;
  p->next = s;  
}


linklist delete(linklist l, int i)
{
  linknode *p = search(&l,i-1);
  linknode *q = p->next;
  p->next = q->next;  
  free(q);
}

int length(linklist l)
{
  if(l==NULL)
    return 0;
  int count;
  while((l=l->next)!=NULL)
    count++;
  return count;
  
}
