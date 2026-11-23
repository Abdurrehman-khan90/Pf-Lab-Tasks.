#include<stdio.h>
void swap(int *x,int *y);
void sort(int *x,int *y,int *z);
void sort(int *x,int *y,int *z)
{


		if(*x>*y)
	{
		swap(x,y);
	}
		if(*x>*z)
	{
		swap(x,z);
	}
if(*y>*z)
{
	swap(y,z);
}

	
}
void swap(int *x1,int *y1)
{
	int t;
	t=*x1;
	*x1=*y1;
	*y1=t;
	}
int main()
{
int a;
int b;
int c;
printf("Enter a:\n");
scanf("%d", &a);
printf("Enter b:\n");
scanf("%d", &b);
printf("Enter c:\n");
scanf("%d", &c);
printf("Before swaping:%d\t,%d\t,%d\n", a,b,c);
sort(&a,&b,&c);
printf("After swapping:%d\t,%d\t,%d\n", a,b,c);
return 0;	
}
