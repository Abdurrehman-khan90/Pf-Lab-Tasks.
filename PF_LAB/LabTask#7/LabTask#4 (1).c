#include <stdio.h>
float convertToFahrenheit(float celsius);
float convertToCelsius(float fahrenheit);
void showTable(int first, int last,int gap);
float convertToFahrenheit(float celsius)
{
    return (celsius*9/5)+32;
}

float convertToCelsius(float fahrenheit)
{
    return(fahrenheit-32.0)*5/9;
}
void showTable(int first, int last, int gap)
{
    int temp;
printf("Celsiu Fahrenheit\n");

    for(temp=first;temp<=last;temp=temp+gap)
    {
        printf("%d %1f\n",temp,convertToFahrenheit((float)temp));
    }
}
int main(void)
{
    int first,last,gap;
    float fahrenheit;
printf("Enter starting temperature: ");
scanf("%d", &first);
printf("Enter ending temperature: ");
scanf("%d", &last);
printf("Enter temperature gap: ");
scanf("%d", &gap);
showTable(first,last,gap);
printf("\nEnter temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);
printf("%.1f F = %.2f C\n",
fahrenheit, convertToCelsius(fahrenheit));
return 0;
}
