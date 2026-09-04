#include <stdio.h>

int main(void)
{
    float a, b;
    float sum = 0;
    printf("What is the first number? ");
    scanf("%f", &a);
    printf("What is the second number? ");
    scanf("%f", &b);
    sum = a + b;
    printf("Sum = %f\n", sum);
    return 0;
}