typedef struct TreeNode{
  int data;
  struct TreeNode *leftchild,*rightchild;
}BiNode,*BiTree;


void preTranverse(Bitree t)
{
  if(T == NULL)
    return;
  printf("%c", T->data);
  preTranverse(t->leftchild);
  preTranverse(t->rightchild);

}

void midTranverse(Bitree t)
{
  if(T==NULL)
    return;
  midTranverse(t->leftchild);
  printf("%c",t->leftchild);
  midTranverse(t->rightchild);
}

void lastTranverse(Bitree t)
{
  if(t==NULL)
    return;
  lastTranverse(t->leftchild);
  lastTranverse(t->rightchild);
  printf("%c",t->data);
}

void creatTreenode(Bitree T)
{
  char ch;
  scanf("%c",&ch);
  if(ch == '#')
    *T==NULL;
  else
    {
      *T = (Bitree)malloc(sizeof(BiNode));
      T->data = ch;
      creatTreenode(&(*T->leftchild));
      creatTreenode(&(*T->rightchild));
    }

}
