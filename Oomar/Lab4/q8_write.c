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



void main()
{
	int fd, n, i,j;
	char mt[] = " ",nl[] = "\n";
	stdinf std;
	fd = open("lab46.dat", O_WRONLY|O_CREAT, S_IRWXU);
	for (i=0; i<1;i++){
		
		
		printf("\n\nStudent %d:\n",i+1);
		printf("std.name: ");
		scanf("%[^\n]%*c",std.name);
		strcat(std.name,mt);
		
			
		
		printf("Student std.id: ");
		scanf("%[^\n]%*c",std.id);
		strcat(std.id,mt);
		
		
		
		printf("Date of birth: ");
		scanf("%[^\n]%*c",std.dob);
		strcat(std.dob,mt);
		
		
		

		printf("Gender: ");
		scanf("%[^\n]%*c",std.gnd);
		strcat(std.gnd,mt);
		

		

		printf("Marital Status: ");
		scanf("%[^\n]%*c",std.msts);
		strcat(std.msts,mt);
		
		
		n=write(fd,std,sizeof(std));
		n=write(fd,nl,strlen(nl));
	}


	close(fd);
}