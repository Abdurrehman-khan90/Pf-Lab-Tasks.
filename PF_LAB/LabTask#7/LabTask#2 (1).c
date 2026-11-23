
#include <stdio.h>
#include <math.h>

int main(void)
{
    double side1, side2, hypotenuse;

    printf("Enter first side: ");
scanf("%lf", &side1);
printf("Enter second side: ");
    scanf("%lf", &side2);
    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
    printf("Hypotenuse: %.2f\n", hypotenuse);
    printf("Rounded up: %.0f\n", ceil(hypotenuse));
    printf("Rounded down: %.0f\n", floor(hypotenuse));
    printf("Area: %.2f\n", 0.5 * side1 * side2);
    return 0;
}
