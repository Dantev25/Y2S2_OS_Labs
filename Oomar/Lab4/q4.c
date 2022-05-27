#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void main(){
int fd, n;
char *c = (char *) calloc(20000000, sizeof(char)); 
fd=open("lab44.dat",O_RDONLY);
n=read(fd,c,2000000);
c[n]='\0';
printf("\n\nfd=%d \nn=%d\n\n",fd,n);
printf("Those bytes are as follows: %s\n", c); 

close(fd);
}
