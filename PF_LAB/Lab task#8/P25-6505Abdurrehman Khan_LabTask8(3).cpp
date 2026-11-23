#include<stdio.h>
#define PI 3.14159f
void circleInfo(float radius, float *area, float *circumference);
void circleInfo(float radius, float *area, float *circumference)
{
	*area=PI*radius*radius;
	*circumference=2*PI*radius;
	
	
}
int main(void)
{
	float radius,area,circumference;
	printf("Enter Radius:\n", radius);
	scanf("%f", &radius);

	while(radius<0)
	{
		printf("Radius Cannot Be negative!\n");
			printf("Enter Radius:\n", radius);
	scanf("%f", &radius);
	
	}
	circleInfo(radius,&area,&circumference);
	printf("Area = %.2f\n", area);
	printf("Circumferfence = % .2f", circumference);
	return 0;
}
