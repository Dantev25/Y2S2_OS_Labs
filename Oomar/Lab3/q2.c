#include <stdio.h>
#include <string.h>

typedef struct{
	char sn[20];
	char on[40];
	char add[75];
	int age;
}student;

typedef struct{
	int min;
	int idmin;
}mix;

mix minmax(student arr[],int count){
	mix tmp;
	tmp.min = arr[0].age;
	tmp.idmin = 0;
	for (int i=1;i<count;i++){
		if(arr[i].age<tmp.min){
			tmp.min = arr[i].age;
			tmp.idmin = i;
		}
	}
	return tmp;
}
student inputStudent(student std[], int n){
	printf("\n\nInput the surname, other names,address and age of student: \n\n");
	for(int i=0;i<n;i++){
		printf("\nStudent %d: \n",i+1);
		printf("Surname:");
		scanf("%s",std[i].sn);
		printf("First name:");
		scanf("%s",std[i].on);
		printf("Address: ");
		scanf("%s",std[i].add);
		printf("Age: ");
		scanf("%d",&std[i].age);
		while(std[i].age<3){
			printf("\nERR: Age cannot be less than 4, input again: ");
			scanf("%d",&std[i].age);
		}
	}
}

void displayStudent(student std[], int n){
	for(int i=0;i<n;i++){
		printf("\nStudent %d: \n",i+1);
		printf("\nSurname: %s",std[i].sn);
		printf("\nOther names: %s",std[i].on);
		printf("\nAddress: %s",std[i].add);
		printf("\nAge: %d",std[i].age);
	}
	
}

void main()
{
	int n;
	printf("\n\nPlease input the number of students: ");
	scanf("%d",&n);
	while((n<1)||(n>20)){
		printf("\nNumber of students needs to be between 1 and 20, input again: ");
		scanf("%d",&n);
	}
	student std[20];
	mix res;
	inputStudent(std,n);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nDisplaying all students input: \n");
	displayStudent(std,n);
	
	res = minmax(std,n);
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf("\n\nDetail of first youngest student: \n\n");
	printf("Surname: %s",std[res.idmin].sn);
	printf("\nFirst name: %s",std[res.idmin].on);
	printf("\nAddress: %s",std[res.idmin].add);
	printf("\nAge: %d\n\n",std[res.idmin].age);
	
}