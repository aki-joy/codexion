#include <pthread.h>
#include <stdio.h>


void    *greet(void *arg)
{
    char    *name;
    int     count = 0;

    name = (char *)arg;
    count++;
    printf("hello, %s, %d\n", name, count);
    return (NULL);
}


int main(void)
{
    pthread_t   t1;
    pthread_t   t2;


    pthread_create(&t1, NULL, greet, "alice");
    pthread_create(&t2, NULL, greet, "bob");
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return (0);
}