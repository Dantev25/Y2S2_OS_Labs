#include <stdio.h>

typedef struct{
	int max;
	int min;
}mix;

mix minmax(int arr[],int n){
	mix tmp;
	tmp.max = arr[0];
	tmp.min = arr[0];
	for (int i=1;i<n;i++){
		if (arr[i]>tmp.max){
			tmp.max = arr[i];
		}
		else if(arr[i]<tmp.min){
			tmp.min = arr[i];
		}
	}
	return tmp;
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
	int arr[n];
	printf("\n\nPlease input to the array.\n\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mix res;
	res = minmax(arr,n);
	printf("\nMax number in array: %d\nMin number in array: %d\n\n",res.max,res.min);
	
}