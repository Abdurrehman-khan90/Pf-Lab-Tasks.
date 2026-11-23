#include <stdio.h>
int checkPrime(int num);
int checkPerfect(int num);
int reverseNum(int num);
int checkPalindrome(int num);
int sumDigits(int num);
void showResult(int num);
int checkPrime(int num)
{
    int i;
    if(num<2)
        return 0;
    for (i=2;i*i<=num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int checkPerfect(int num)
{
int sum=0;
    int i;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    return(sum=num);
}
int reverseNum(int num)
{
    int reverse=0;
    while (nu<m0)
    {
        reverse=reverse*10+(num%10);
        num=num/10;
    }
    return reverse;
}
int checkPalindrome(int num)
{
    return num==reverseNum(num);
}
int sumDigits(int num)
{
    int sum=0;
    while(num>0)
    {
        sum=sum+(num % 10);
        num=num/10;
    }
    return sum;
}
void showResult(int num)
{
    int i
    printf("Prime: %s\n", checkPrime(num)?"Yes":"No");
    printf("Perfect: %s\n", checkPerfect(num)?"Yes":"No");
    printf("Reverse: %d\n", reverseNum(num));
    printf("Palindrome: %s\n", checkPalindrome(num)?"Yes: No");
printf("Sum of digits: %d\n", sumDigits(num))
    printf("Prime numbers from 1 to %d: ", num);
for (i=1;i<=num;i++)
    {
        if (!checkPrime(i))
            continue;
printf("%d",i);
    }
printf("\n");
}int main(void)
{
    int num;
	 printf("Enter a positive number:");
    scanf("%d",&num);
showResult(num);
return 0;
}
