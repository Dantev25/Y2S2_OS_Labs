#include <stdio.h>
#include <string.h>

typedef struct{
	char sn[20];
	char fn[20];
	char add[75];
}det;

typedef struct{
	float max;
	float min;
	int idmin;
	int idmax;
}mix;

mix minmax(float arr[],int count){
	mix tmp;
	tmp.max = arr[0];
	tmp.idmax = 0;
	tmp.min = arr[0];
	tmp.idmin = 0;
	for (int i=1;i<count;i++){
		if (arr[i]>tmp.max){
			tmp.max = arr[i];
			tmp.idmax = i;
		}
		else if(arr[i]<tmp.min){
			tmp.min = arr[i];
			tmp.idmin = i;
		}
	}
	return tmp;
}

det input(det std[], float marks[],int n){
	printf("\n\nInput the surname, first name and Address of students: \n\n");
	for(int i=0;i<n;i++){
		printf("\nStudent %d: \n",i);
		printf("Surname:");
		scanf("%s",std[i].sn);
		printf("First name:");
		scanf("%s",std[i].fn);
		printf("Address: ");
		scanf("%s",std[i].add);
		printf("Marks: ");
		scanf("%f",&marks[i]);
		while(marks[i]<0){
			printf("\nERR: Marks cannot be negative, input again: ");
			scanf("%f",&marks[i]);
		}
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
	det std[n];
	float marks[n];
	mix res;
	input(std,marks,n);
	res = minmax(marks,n);

	printf("\n\nDetail of student with highest marks: \n\n");
	printf("Surname: %s",std[res.idmax].sn);
	printf("\nFirst name: %s",std[res.idmax].fn);
	printf("\nAddress: %s",std[res.idmax].add);
	printf("\nMarks: %.2f",marks[res.idmax]);

	printf("\n\nDetail of student with lowest marks: \n\n");
	printf("Surname: %s",std[res.idmin].sn);
	printf("\nFirst name: %s",std[res.idmin].fn);
	printf("\nAddress: %s",std[res.idmin].add);
	printf("\nMarks: %.2f\n\n",marks[res.idmin]);
}