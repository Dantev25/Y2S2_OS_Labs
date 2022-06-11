/*Not sure it good*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

void main(int argc, char *argv[]){
	int fd[2];
	int x,f,r,w;
	int fd1,n;
	char line[20];
	char *c = (char *) calloc(500,sizeof(char));
	x=pipe(fd);
	f=fork();

	fd1=open("myfile.txt",O_RDONLY);
    n=read(fd1,c,500);
    c[n] = '\0';

    if(f==0){
    	close(fd[1]);
    	r=read(fd[0],c,20);
        printf("\n%s\n",c);
    }

    else{
    	if(f>0){
    		close(fd[0]);
    		w=write(fd[1],c,20);
    	}

    	else{
    		printf("Error in process creation!");
    	}
    }
    close(fd1);

    printf("\nargc = %d\n",argc);
    printf("\nThe arguments are:\n");
    for(int i=0;i<argc;i++){
    	printf("argv[%d] = %s\n",i,argv[i]);
    }

}