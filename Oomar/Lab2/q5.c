#include <stdio.h>

void inputArray(int A[], int n){
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
}


void displayArray(int A[], int n){
	printf("\n\nArray values: \n");
	for(int i=0;i<n;i++){
		if(i!= (n-1)){
			printf("%d, ",A[i]);
		}
		else{
			printf("%d.\n\n",A[i]);
		}
	}
}


void main()
{
	int n;
	printf("\n\nPlease input the number of integers: ");
	scanf("%d",&n);
	while(n<0){
		printf("\nn cannot be less than 0, input again: ");
		scanf("%d",&n);
	}
	int A[n];
	inputArray(A,n);
	displayArray(A,n);
}