#include <stdio.h>
int main()
{
    char ch='M';
    int num=42;
    float pi=3.141590;
    double value=98.765432;

    printf("Type Name\tVariable Value\tSize in Memory\n");
    printf("------------------------------------\n");
    printf("char\t\t'%c'\t\t%dbyte(s)\n",ch,sizeof(ch));
    printf("int\t\t%d\t\t%dbyte(s)\n", num,sizeof(num));
    printf("float\t\t%.6f\t%dbyte(s)\n",pi,sizeof(pi));
    printf("double\t\t%.6f\t%dbyte(s)\n",value,sizeof(value));
    printf("------------------------------------\n");
    return 0;
}
