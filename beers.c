#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <pthread.h>

int beer = 200000;

pthread_mutex_t a_lock = PTHREAD_MUTEX_INITIALIZER;

void error(char *msg)
{
  fprintf(stderr, "%s :%s\n", msg, strerror(errno));
  exit(1);
}

void* beers(void *a)
{
  int i;
  
  printf("there are %i bottles\n", beer);
  pthread_mutex_lock(&a_lock);
  for(i=0;i<10000;i++)
    beer = beer - 1;
  pthread_mutex_unlock(&a_lock);
  printf("there are %i bottles\n", beer);
  return NULL;
}


int main()
{
  pthread_t threads[20];
  int t;
  printf("%i bottles of beer on the wall\n", beer);
  for(t=0;t<20;t++)
    if(pthread_create(&threads[t],NULL,beers,NULL) == -1)
      error("can not create thread");
  void *result;
  for(t=0;t<20;t++)
    if(pthread_join(threads[t],&result) == -1)
      error("can not recycle thread");
  printf("There are %i bottles of beer on the wall\n", beer);
  return 0;
}
