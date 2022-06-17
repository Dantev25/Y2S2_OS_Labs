#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

int n = 100;
double x = 0;
void *funct1(void *);
void *funct2(void *);

int fact(int k){
    int res = 1, i;
    for (i = 1; i <= k; ++i) {
        res *= i;
    }
}
double sint(double x, double sums, int n, int i){
    if (n==1){
        return (x+sums);
    }
    else if(n%2!=0){
        sums = sums + (pow(x,i)/(fact(i)));
        n = n-1;
        i = (2*n)+1;
        return(sint(x,sums,n,i));
    }
    else if(n%2==0){
        sums = sums - (pow(x,i)/fact(i));
        n = n-1;
        i = (2*n)+1;
        return(sint(x,sums,n,i));
    }
}

double cost(double x, double sumc, int n, int i){
    if (n==1){
        return (1+sumc);
    }
    else if(n%2!=0){
        sumc = sumc - (pow(x,i)/fact(i));
        n = n-1;
        i = (2*n);
        return(cost(x,sumc,n,i));
    }
    else if(n%2==0){
        sumc = sumc + (pow(x,i)/fact(i));
        n = n-1;
        i = (2*n);
        return(cost(x,sumc,n,i));
    }
}



void *funct1(void *ptr){
    int i=(2*n);
    double sumc = 0;
    sumc = cost(x,sumc,n,i);
    printf("\nCos is = %g\n", sumc);

}

void *funct2(void *ptr){
    int i=(2*n)+1;
    double sums = 0;
    sums = sint(x,sums,n,i);
    printf("\nSin is = %g\n", sums);
   
}

int main(){

    pthread_t thread1, thread2;
    printf("\ninput angle in degrees: ");
    scanf("%lf",&x);
    x = (x/180)*M_PI;

    pthread_create( &thread1, NULL, funct1, NULL );
    pthread_create( &thread2, NULL, funct2, NULL );
    

    pthread_join( thread1, NULL);
    pthread_join( thread2, NULL);
    sleep(5);
    printf("\nParent Thread Exiting\n");


    return 0;

}