#include <stdio.h>
#include <math.h>
void main()
{
	printf("\nPlease input radius of a circle\n");
	double rad, vol, area;
	scanf("%lf",&rad);
	while(rad<0){
		printf("Please input again, radius cannot be negative\n");
		scanf("%lf",&rad);
	}
	printf("Radius = %.2lf",rad);
	vol = pow(rad,3)*M_PI*(4.0/3);
	area = pow(rad,2)*4*M_PI;
	printf("\nArea = %.3lf\nVolume = %.3lf\n",area,vol);
}
