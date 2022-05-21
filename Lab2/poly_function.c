#include <stdio.h>
#include <math.h>


void poly(int *x, int *result)
{
	printf("\n\nf(x): x^4 + x^3 + 3x^2 + 2");
	printf("\nPlease input x: ");
	scanf("%d",&x);
}

void main()
{
	int x,result;
	printf("\n\nf(x): x^4 + x^3 + 3x^2 + 2");
	printf("\nPlease input x: ");
	scanf("%d",&x);
	poly(x,&result);
	printf("f(%d) = ",x,result);
}