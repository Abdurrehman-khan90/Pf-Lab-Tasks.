
#include<stdio.h>
void showMenu(void);
int getNumber(void);
void printLine(int size);
long calculatePower(int num,int power);
long calculateFactorial(int num);
int findGCD(int num1,int num2);
int findLCM(int num1,int num2);

void showMenu(void)
{
printf("----- MINI MATH TOOLKIT -----\n");
printf("1. Power\n");
printf("2. Factorial\n");
printf("3. GCD and LCM\n");
printf("4. Exit\n");
printf("Enter your choice: ");
}

int getNumber(void)
{
int num;
while(1)
{
printf("Enter a non-negative number: ");
scanf("%d",&num);
if(num>=0)
return num;
}
}

void printLine(int size)
{
int i;
for(i=1;i<=size;i++)
printf("-");
printf("\n");
}

long calculatePower(int num,int power)
{
long result=1;
int i;
for(i=1;i<=power;i++)
result=result*num;
return result;
}

long calculateFactorial(int num)
{
long fact=1;
int i;
for(i=2;i<=num;i++)
fact=fact*i;
return fact;
}

int findGCD(int num1,int num2)
{
int temp;
while(num2!=0)
{
temp=num1%num2;
num1=num2;
num2=temp;
}
return num1;
}

int findLCM(int num1,int num2)
{
if(num1==0||num2==0)
return 0;
return (num1/findGCD(num1,num2))*num2;
}

int main(void)
{
int choice;
int num1,num2,power;
do
{
showMenu();
scanf("%d",&choice);
if(choice==1)
{
num1=getNumber();
power=getNumber();
printLine(20);
printf("%d ^ %d = %ld\n",num1,power,calculatePower(num1,power));
printLine(20);
}
else if(choice==2)
{
num1=getNumber();
printLine(20);
printf("%d! = %ld\n",num1,calculateFactorial(num1));
printLine(20);
}
else if(choice==3)
{
num1=getNumber();
num2=getNumber();
printLine(20);
printf("GCD = %d\n",findGCD(num1,num2));
printf("LCM = %d\n",findLCM(num1,num2));
printLine(20);
}
else if(choice==4)
{
printf("Goodbye!\n");
}
else
{
printf("Invalid choice.\n");
}
}
while(choice!=4);
return 0;
}
