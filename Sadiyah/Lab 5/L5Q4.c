#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#define N 2

void *funct1(void *);
void *funct2(void *);


void *funct1(void *ptr){
    
    int x = *((int*)(ptr));
    printf("\nthread1 returns %d",x);
}

void *funct2(void *ptr){
    int z = *((int*)(ptr));
    printf("\nthread2 returns %d",z);
    
}

int main(){
    int n1 = 5,n2 = 7;
    pthread_t thread1, thread2;
    pthread_create( &thread1, NULL, funct1, (void*)&n1 );
    pthread_create( &thread2, NULL, funct2, (void*)&n2 );
    

    pthread_join( thread1, NULL);
    pthread_join( thread2, NULL);
    sleep(1);
    printf("\nParent Thread Exiting\n");


    return 0;

}

