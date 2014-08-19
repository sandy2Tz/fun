#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>


pthread_mutex_t a_lock = PTHREAD_MUTEX_INITIALIZER;

int beer = 100000;

void* beers(void *param)
{
  int i;
  long pthread_id = (long)param;
  pthread_mutex_lock(&a_lock);
  for(i=0;i<5000;i++)
    beer = beer - 1;
  pthread_mutex_unlock(&a_lock);
  printf("%ld :Have %d beers\n",pthread_id, beer);
  
  return NULL;
  
}

void error(char *msg)
{
  fprintf(stderr,"%s : %s\n", msg, strerror(errno));
  exit(1);
}
int main()
{
  pthread_t thread[20];
  long t;
  for(t=0;t<20;t++)
    {
      if(pthread_create(&thread[t],NULL,beers,(void *)t) == -1)
	error("can not create thread");
    }
  void * result;
  for(t=0;t<20;t++)
    {
      if(pthread_join(thread[t],&result)==-1)
	error("can not recycle thread");
    }
  printf("Now: %d\n",beer);
  return 0;
}
