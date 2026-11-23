#include<stdio.h>
int main()
{
	float radius = 7.5;
	float pi =3.14159;
	float Diameter ;
	float Area;
    float Circumference = 2*pi*radius;
    Diameter=2*radius;
	Area = pi*radius*radius;
	printf("================ CIRCLE GEOMETRY REPORT ================\n");
	printf("Given Radius:\t%.3f cm\n",  radius);
	printf("Calculated Diameter:\t%.3f cm\n",Diameter);
	printf("Calculated Circumference:\t%.3f cm\n",Circumference) ;
	printf("Calculated Area:\t%.3f sq.cm\n",Area);
	
	return 0;
}
