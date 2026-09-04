#include <stdio.h>

int main(void)
{
    float a, b;
    printf("What is the first number? ");
    scanf("%f", &a);
    printf("What is the second number? ");
    scanf("%f", &b);
    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    int quotient = a / b;
    printf("Sum = %f\nDifference = %f\nProduct = %f\nQuotient = %i\n", sum, difference, product, quotient);
}