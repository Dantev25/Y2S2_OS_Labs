#include <stdio.h>
#include <string.h>

typedef struct{
	char sn[20];
	char on[40];
	char add[75];
	int age;
}student;


student inputStudent(student std,int i){
	printf("\n\nInput the surname, other names,address and age of student: \n\n");
	printf("\nStudent %d: \n",i);
	printf("Surname:");
	scanf("%s",std.sn);
	printf("First name:");
	scanf("%s",std.on);
	printf("Address: ");
	scanf("%s",std.add);
	printf("Age: ");
	scanf("%d",&std.age);
	while(std.age<3){
		printf("\nERR: Age cannot be less than 4, input again: ");
		scanf("%d",&std.age);
	}
	return std;
}

void displayStudent(student std){
	printf("Surname: %s",std.sn);
	printf("\nOther names: %s",std.on);
	printf("\nAddress: %s",std.add);
}

void main()
{
	student s1, s2;
	int eld=0,i=1;
	s1 = inputStudent(s1,&i);
	i++;
	s2 = inputStudent(s2,&i);
	if (s1.age == s2.age){
		printf("\n\nBoth students are of same age.\nDisplaying both details:\n\n");
		printf("Student 1: \n");
		displayStudent(s1);
		printf("\n\nStudent 2: \n");
		displayStudent(s2);
		printf("\n\n");
	}
	else if(s1.age>s2.age){
		printf("\n\nOlder student:\n");
		printf("Student 1: \n");
		displayStudent(s1);
	}
	else{
		printf("\n\nOlder student:\n");
		printf("Student 2: \n");
		displayStudent(s2);
	}
}