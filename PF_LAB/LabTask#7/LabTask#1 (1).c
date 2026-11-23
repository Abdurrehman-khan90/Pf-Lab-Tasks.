#include <stdio.h>
void welcome(void);
void printSquare(int rows, char symbol);
void welcome(void)
{
    printf("==============================\n");
    printf("       Pattern Printer\n");
    printf("==============================\n");
}
void printSquare(int rows, char symbol)
{
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            printf("%c ",symbol);
        }
        printf("\n");
    }
}
int main(void)
{
    int rows;
    char symbol;
    welcome();
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter a character: ");
    scanf(" %c", &symbol);
    printSquare(rows, symbol);
    welcome();
    return 0;
}
