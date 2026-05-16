#include <stdio.h>

int main()
{
    printf("Name: Purvith S\n");
    printf("USN: 1JS25CI064\n");
    printf("Program: Simple Arithemetic Operatins\n");
    printf("----------------------------------------\n");

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSum = %d\n",a+b);
    printf("Differance = %d\n",a-b);
    printf("Product = %d\n",a*b);
    printf("Quotient = %d\n",a/b);
    return 0;
}
