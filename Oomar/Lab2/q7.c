#include <stdio.h>
#include <string.h>

typedef struct{
	char sname[20];
	char fname[20];
	char add[75];
}details;


void main()
{
	details person;
	printf("\n\nInput the surname, first name and Address: \n\n");
	printf("Surname:");
	scanf("%s",person.sname);
	printf("First name:");
	scanf("%s",person.fname);
	printf("Address: ");
	scanf("%s",person.add);

	printf("\n\nDetails input:\n\n");
	printf("Surname: %s",person.sname);
	printf("\nFirst name: %s",person.fname);
	printf("\nAddress: %s\n\n",person.add);
	
}