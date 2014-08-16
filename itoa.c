#include <stdio.h>

int main()
{
  int i=j=0;
  int num = 123456;
  char temp[7],str[7];
  
  while(num)
    {
      temp[i] = num%10 + '\0';
      i++;
      num = num/10;
    } //倒序, i多加1
  
  i = i-1;
  while(i>=0)
    {
      src[j]=temp[i];
      j++;
      i--;
    }
  src[j] = '\0';
 
}



char temp[7] = "1234567";
int i;
int num = sum;

while(temp[i])
  {
    sum = sum*10+(temp[i]-'\0');
    i++;
  }


void strcpy(char *desc, const char *src)
{
  assert(desc!=NULL && src!=NULL);
  char * temp = desc;
  while(*src!='\0')
    *temp++ = *src++;
  *temp = '\0';
  return src;    
}


char *strcat(char *s1, char *s2)
{
  assert(s1!=NULL && s2!=NULL);
  char *beg = NULL,*ptr = NULL;
  for(beg = s1; *beg!='\0';beg++);
  ptr = s2;
  while(*ptr!='\0')
    {
      *beg++ = *ptr++;
    }
  *ptr='\0';
  
  return s1;
    
}


void func(char *str, int n)
{
  int i;
  int length = strlen(str);
  if(n>length)
    return;
  
  
  
}
