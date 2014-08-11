#include<stdio.h>

struct queue{
  int data[1000];
  int tail;
  int head;
};

struct stack{
  int data[10];
  int top;
};

int main(){
  struct queue q1, q2;
  struct stack s;
  
  int book[10];
  int i,t;
  
  q1.head = 1;q1.tail = 1;  //初始化队列
  q2.head = 1;q2.tail = 1; 
  
  s.top = 0;  //初始化栈

  for(i = 0; i < 10; i++)  //初始化数组
    book[i] = 0;

  for(i = 0; i < 6; i++){  //6张牌
    scanf("%d", &q1.data[q1.tail]);
    q1.tail++;
  }
  
  for(i = 0; i < 6; i++){
    scanf("%d",&q2.data[q2.tail]);
    q2.tail++;      
  }
  
  while(q1.head < q1.tail && q2.head < q2.tail)
    {
      t = q1.data[head];
      if(book[t] == 0)
	//没有赢
	{
	  q1.head++;
	  top++;
	  s.data[top] = t;
	  book[t] = 1;
	}
      else //赢了
	{
	  q1.head++;
	  q1.data[tail] = t;
	  q1.tail++;
	  //出栈压入q1的尾巴，直到发现book[t]元素
	  while(s.data[s.top] == t) //数组t为牌号
	    {
	      book[s.data(s.top)] = 0;//将数组置空
	      q1.data[q1.tail] = s.data[s.top];
	      q1.tail++;
	      s.top--; 
	    }

	}
      t = q2.data[head];
      if(book[t] == 0) //桌面上没有可以赢的牌
	{
	  q2.head++;
	  top++;
	  s.data[s.top] = t;
	  book[t] = 1;
	}
    }

  
}
