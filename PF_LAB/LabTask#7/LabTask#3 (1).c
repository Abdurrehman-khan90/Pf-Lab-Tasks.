#include <stdio.h>
int getUnits(void);
float calculateBill(int units);
int getUnits(void)
{
    int units;
    while (1)
    {
        printf("Enter electricity units: ");
        scanf("%d",&units);
        if (units>=0)
            return units;
        printf("Please enter a positive number\n");
    }
}
float calculateBill(int units)
{
    float total=0.0;
    if(units<=100)
    {
        total=units*10;
    }
    else if(units<=300)
    {
        total=100*10+(units-100)*15;
    }
    else
    {
        total=100*10+200*15+(units-300)*20;
    }
    if (total>3000)
    {
        total=total+(total*0.05);
    }
    return total;
}
int main(void)
{
    int units;
    float bill;
    units=getUnits();
    bill=calculateBill(units);
    printf("Units consumed%d\n",units);
    printf("Total electricity bill %.2f\n",bill);
    return 0;
}
