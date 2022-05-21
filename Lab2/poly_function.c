#include <stdio.h>
#include <math.h>


void poly(int *x, int *result)
{
	printf("\n\nf(x): x^4 + x^3 + 3x^2 + 2");
	printf("\n\nPlease input x: ");
	scanf("%d",x);
	*result = pow(*x,4) + pow(*x,3) + (3*pow(*x,2)) + 2;
}

void main()
{
	int x,result;
	poly(&x,&result);
	printf("\nf(%d) = %d\n\n",x,result);
}