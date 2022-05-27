#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[21];
	char id[11];
	char dob[11];
	char gnd[8];
	char msts[11];
}stdinf;

void main(){
int fd, n;
stdinf *c = (stdinf *) calloc(10000, sizeof(stdinf)); 
char *z = (char *) calloc(10, sizeof(char)); 
fd=open("lab46.dat",O_RDONLY);
n=read(fd,c,10000);
z[n] = '/0';
printf("\n\nfd=%d \nn=%d\n\n",fd,n);
printf("File lab.45.dat: %s\n\n", c); 

close(fd);
}
