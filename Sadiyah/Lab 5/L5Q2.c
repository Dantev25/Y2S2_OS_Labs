#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#define N 2

void *funct1(void *);
void *funct2(void *);
typedef struct{
    char name[25];
    char id[10];

}student;

student std[N];

void *funct1(void *ptr){
    printf("\nStudent names:\n");
    for(int i=0;i<N;i++){
        printf("%d) %s\n",i+1,std[i].name);
    }
}

void *funct2(void *ptr){
    printf("\nStudent Ids:\n");
    for(int i=0;i<N;i++){
        printf("%d) %s\n",i+1,std[i].id);
    }
}

int main(){
    int i,j;
    pthread_t thread1, thread2;

    for(i=0;i<2;i++){
        printf("\n\nStudent %d:\n",i+1);
        printf("Name: ");
        scanf("%[^\n]%*c",std[i].name);

        printf("Student ID: ");
        scanf("%[^\n]%*c",std[i].id);
    }
    
    pthread_create( &thread1, NULL, funct1, NULL );
    pthread_create( &thread2, NULL, funct2, NULL );
    

    pthread_join( thread1, NULL);
    pthread_join( thread2, NULL);
    sleep(5);
    printf("\nParent Thread Exiting\n");


    return 0;

}

