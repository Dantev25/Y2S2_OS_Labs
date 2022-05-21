#include <stdio.h>
#include <math.h>


void arvolsph(double *rad, double *area, double *vol)
{
	printf("\nPlease input radius of the circle: ");
	scanf("%lf",rad);
	while(*rad<0){
		printf("Please input again, radius cannot be negative\n");
		scanf("%lf",rad);
	}
	printf("Radius = %.2lf",*rad);
	*vol = pow(*rad,3)*M_PI*(4.0/3);
	*area = pow(*rad,2)*4*M_PI;
	printf("\nArea = %.3lf\nVolume = %.3lf\n",*area,*vol);
}

void main()
{
	double r1, r2, v1, v2, a1, a2,la,lv;
	printf("\nInner ball: \n");
	arvolsph(&r1,&a1,&v1);
	printf("\n\nOuter ball: \n");
	arvolsph(&r2,&a2,&v2);
	while (r1>r2){
		printf("\nError- Outer ball cannot have smaller radius: Input again.\n");
		arvolsph(&r2,&a2,&v2);

	}
	la = a1+a2;
	lv = v2-v1;
	printf("\nSurface area liquid covers = %.3lf\n",la);
	printf("Volume of liquid contained = %.3lf\n\n",lv);
}
