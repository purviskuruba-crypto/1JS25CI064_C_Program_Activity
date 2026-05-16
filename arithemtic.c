#include <stdio.h>

int main()
{
    printf("Name: Purvith S\n");
    printf("USN: 1JS25CI064\n");
    printf("Program: Simple Arithemetic Operatins\n");
    printf("----------------------------------------\n");

    float a, b,res;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nSum = %f\n",a+b);
    printf("Differance = %f\n",a-b);
    printf("Product = %f\n",a*b);
    res = a/b;
    printf("Quotient = %f\n",res);
    return 0;
}
