#include <stdio.h>
int main()
{
    double principal=250000.00;
    float rate=8.5;
    int time=3;
    double interest;
    double total;
    double monthly;
    interest=(principal*rate*time)/100.0;
    total=principal+interest;
    monthly=total/(time*12.0);
    printf("=============== BANK LOAN INTEREST SUMMARY ===============\n");
    printf("Principal Amount:        PKR %.2f\n", principal);
    printf("Annual Interest Rate:       %.2f%%\n", rate);
    printf("Loan Duration:              %d Years (%d Months)\n", time, time * 12);
    printf("-----------------------------------------------------------\n");
    printf("Total Accrued Interest:      RS: %.2f\n", interest);
    printf("Total Payable Amount:        RS: %.2f\n", total);
    printf("Monthly Installment:         RS: %.2f\n", monthly);
    printf("===========================================================\n");

    return 0;
}
