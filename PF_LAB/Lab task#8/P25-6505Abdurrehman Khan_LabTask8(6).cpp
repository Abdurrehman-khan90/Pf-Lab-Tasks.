#include<stdio.h>
#include<math.h>
int solveQuadratic(double a, double b, double c, double *r1, double *r2);
int solveQuadratic(double a, double b, double c, double *r1, double *r2)
{
	double d;
	d=b*b-4*a*c;
	if(d<0)
	{
		return 0;
	}
	if(d==0)
	{
		*r1=-b/(2*a);
		return 1;
	}
	double s;
	s=sqrt(d);
	*r1=(-b+s)/(2*a);
		*r2=(-b-s)/(2*a);
		return 2;
		
	
}
//Comment:
//The Function needs both because they both have 
//to perform two diffrent task a function has the 
//ability to return only once so we nees pointer also





int main(void)
{
double	a,b,c,r1,r2;
	printf("Enter a:\n");
	scanf("%lf", &a);
		printf("Enter b:\n");
	scanf("%lf", &b);
		printf("Enter c:\n");
	scanf("%lf", &c);
	if(a==0)
	{
		printf("Invalid Input! A cannot be zero!");
		return 1;
	}
	int q= solveQuadratic(a,b,c,&r1,&r2);
	if(q==1)
	{
		printf("There are one real Root %lf: ", r1);
	}
	if(q==2)
	{
		printf("There are two Real Roots %lf  ,  %lf: ", r1,r2);
	}
	if(q==0)
	{
		printf("There are no real roots!");
		
	}
	return 0;
}
