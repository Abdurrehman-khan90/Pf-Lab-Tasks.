#include<stdio.h>
void showBalance(float *balance);
void deposit(float *balance, float amount);
int withdraw(float *balance, float amount);
int main()

{
	
	float balance;
	balance=5000;
	float amount;
	int choice;

	do{
		
		printf("1. SHOW BALANCE!\n");
	printf("2. Deposit!\n");
	printf("3. Withdraw!\n");
	printf("4. Exit\n");
		printf("Enter your choice:\n");
	scanf("%d", &choice);
	if(choice==1)
	{
		showBalance(&balance);
		
		
	}
	else if(choice==2)
	{
		printf("Enter Amount to Deposit:\n");
		scanf("%f", &amount);
		deposit(&balance,amount);
		printf("Amount After deposit is:%f\n", deposit);
	}
	else if(choice==3)
	{
		printf("Enter Amount to Withdraw:\n");
		scanf("%f", &amount);
		if(balance<amount)
	{
		printf("Invalid CHOICE");
	}
		 withdraw(&balance, amount);
		 printf("Amount After Withdraw is:%f\n", balance);
		
	}
	else if(choice==4)
	{
		printf("Good Bye!");
	}
	else
	printf("Wrong Choice");
	}
	while(choice!=4);
	
		
		return 0;
	


	
}
void showBalance(float *balance)
{
	printf("Balance = Rs:%.2f\n", *balance);
}
void deposit(float *balance, float amount)
{
	if (amount<=0)
	printf("Invalid Amount!\n");
	else
	*balance=*balance+amount;
}
int withdraw(float *balance, float amount)
{
	if(amount>*balance)
	{
		return 0;
	}
*balance=*balance-amount;
return 1;
}
