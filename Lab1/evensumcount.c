#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int i = 0;
	double n, sum;
	printf("Input positive numbers or -1 to end.\n");
	scanf("%lf",&n);
	while(n<-1){
		printf("Error: Please input a positive number or -1");
		scanf("%lf",&n);
	}
	
	while (n!=-1){
		if (fmod(n,2)==0){
			sum = sum + n;
			i++;
		}
		scanf("%lf",&n);
		while(n<-1){
			printf("Error: Please input a positive number or -1");
			scanf("%lf",&n);
		}
	}
	printf("\nCount of even numbers: %d\nSum of even numbers = %.2lf\n",i,sum);
}