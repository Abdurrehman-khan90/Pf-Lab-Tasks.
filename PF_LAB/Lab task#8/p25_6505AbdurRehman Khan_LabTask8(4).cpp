#include<stdio.h>
void time(int sec,int *h,int *m,int *s);
void extratime(int sec1,int *h,int *m,int *s);
void time(int sec,int *h,int *m,int *s)
{
	*s=sec%60;
	sec=sec/60;
	*m=sec%60;
	sec=sec/60;
	*h=sec%60;
	sec=sec/60;
}
void extratime(int sec1,int *h,int *m,int *s){
	*s=sec1%60;
	sec1=sec1/60;
	*m=sec1%60;
	sec1=sec1/60;
	*h=sec1%60;
	sec1=sec1/60;
}
int main()
{
int sec;
printf("Enter seconds:\n");
scanf("%d", &sec);
int sec1=sec;
int h,m,s;
	time(sec,&h,&m,&s);
	printf("Time %d : %d : %d \n", h,m,s);
	int add;
	printf("Enter Extra time to add:\n");
	scanf("%d", &add);
	add=add+sec1;
	time(add,&h,&m,&s);
	printf("Time %d : %d : %d", h,m,s);
}
