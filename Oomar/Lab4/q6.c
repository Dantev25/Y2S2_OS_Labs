#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void main(){
int fd, n;
char *c = (char *) calloc(10000, sizeof(char)); 
fd=open("lab45.dat",O_RDONLY);
n=read(fd,c,10000);
c[n]='\0';
printf("\n\nfd=%d \nn=%d\n\n",fd,n);
printf("File lab.45.dat: %s\n\n", c); 

close(fd);
}
