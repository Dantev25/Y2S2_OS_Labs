#include <stdio.h>
#include <math.h>

typedef struct{
	double rad;
	double vol;
	double area;
}sphere;

sphere arvolsph(double r)
{
	sphere a;
	a.rad=r;
	printf("Radius = %.2lf",a.rad);
	a.area = pow(a.rad,3)*M_PI*(4.0/3);
	a.vol = pow(a.rad,2)*4*M_PI;
	printf("\nArea = %.3lf\nVolume = %.3lf\n",a.area,a.vol);
	return a;
}

void main()
{
	int i=0;
	double r,la,lv;
	sphere out, in;
	printf("\nInner ball: \n");
	printf("\nPlease input radius of the circle: ");
	scanf("%lf",&r);
	while(r<0){
		printf("Please input again, radius cannot be negative\n");
		scanf("%lf",&r);
	}
	in = arvolsph(r);
	
	printf("\n\nOuter ball: \n");
	scanf("%lf",&r);
	while(r<0){
		printf("Please input again, radius cannot be negative\n");
		scanf("%lf",&r);
		while (in.rad>r){
			printf("\nError- Outer ball cannot have smaller radius: Input again.\n");
			scanf("%lf",&r);
			out = arvolsph(r);
		}
	}
	out = arvolsph(r);

	la =  in.area + out.area;
	lv = out.vol - in.vol;
	printf("\nSurface area liquid covers = %.3lf\n",la);
	printf("Volume of liquid contained = %.3lf\n\n",lv);
}
