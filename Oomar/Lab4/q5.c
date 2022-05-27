#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>





void main()
{
	int fd, n, i,j;
	char name[21], id[11], dob[11],gnd[8],msts[11],mt[] = " ",nl[] = "\n";
	fd = open("lab45.dat", O_WRONLY|O_CREAT, S_IRWXU);
	for (i=0; i<2;i++){
		
		
		printf("\n\nStudent %d:\n",i+1);
		printf("Name: ");
		scanf("%[^\n]%*c",name);
		strcat(name,mt);
		n=write(fd,name,strlen(name));
			
		
		printf("Student ID: ");
		scanf("%[^\n]%*c",id);
		strcat(id,mt);
		n=write(fd,id,strlen(id));
		
		
		printf("Date of birth: ");
		scanf("%[^\n]%*c",dob);
		strcat(dob,mt);
		n=write(fd,dob,strlen(dob));
		
		

		printf("Gender: ");
		scanf("%[^\n]%*c",gnd);
		strcat(gnd,mt);
		n=write(fd,gnd,strlen(gnd));

		

		printf("Marital Status: ");
		scanf("%[^\n]%*c",msts);
		strcat(msts,mt);
		n=write(fd,msts,strlen(msts));
		
		
		n=write(fd,nl,strlen(nl));
	}


	close(fd);
}