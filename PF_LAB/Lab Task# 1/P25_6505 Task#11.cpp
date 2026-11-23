#include <stdio.h>
int main()
{
    int tea_qty = 3;
    int samosa_qty = 4;
    int chicken_qty = 2;

    float tea_price = 60.00;
    float samosa_price = 40.50;
    float chicken_price = 120.00;

    float tea_subtotal;
    float samosa_subtotal;
    float chicken_subtotal;
    float bill_subtotal;
    float gst;
    float grand_total;

    tea_subtotal = tea_qty * tea_price;
    samosa_subtotal = samosa_qty * samosa_price;
    chicken_subtotal = chicken_qty * chicken_price;
    bill_subtotal = tea_subtotal + samosa_subtotal + chicken_subtotal;
    gst = 0.16 * bill_subtotal;
    grand_total = bill_subtotal + gst;
    printf("=========== FAST CAFETERIA REEIPT ===========\n");
    printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("-------------------------------------------------------\n");
    printf("Tea\t\t%d\t%.2f\t\t\t%.2f\n",tea_qty, tea_price, tea_subtotal);
	printf("Samosa\t\t%d\t%.2f\t\t\t%.4f\n",samosa_qty, samosa_price, samosa_subtotal);
    printf("Chicken Roll\t%d\t%.2f\t\t\t%.2f\n",chicken_qty, chicken_price, chicken_subtotal);

    printf("-------------------------------------------------------\n");
    printf("Subtotal:\t\t\t\tPKR %.2f\n", bill_subtotal);
    printf("GST (16%%):\t\t\t\tPKR %.4f\n", gst);
    printf("-------------------------------------------\n");
    printf("Grand Total:\t\t\t\tPKR %.2f\n", grand_total);
    printf("============ THANK YOU FOR YOUR VISIT ========\n");
     return 0;
}
