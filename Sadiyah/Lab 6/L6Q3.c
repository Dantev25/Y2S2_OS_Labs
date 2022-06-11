#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int n,i;
	int k=12;
	printf("Input size of your array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Input elements of your array:\n");
	for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
	}

	if(fork()==0){
	    printf("\nI am the child!\n");
	    for(i=0;i<n;i++){
	    	if(arr[i]%2==1){
	    		arr[i]=k;
	    		k+=5;
	    	}
	    }

	    printf("The elements after modifying the odd elements are: ");
	    for(i=0;i<n;i++){
	    	printf("%d ",arr[i]);
	    }
	    printf("\n");
	}

	else{
	    printf("\nI am the parent!\n");
	    printf("The elements are: ");
	    for(i=0;i<n;i++){
	    	printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}