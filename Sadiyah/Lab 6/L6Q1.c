#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	pid_t  x = getpid();
    pid_t parent = getppid();

	if (fork()==0){
        printf("I am the child process with pid = %d. My parent's pid = %d\n",x,parent);
        sleep(1);
    }

    else{
    	printf("\nI am the parent process with pid = %d\n",parent);
        sleep(1);    	
    }
    return 0;
}