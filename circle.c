#include <stdio.h>

int main(void)
{
    float radius;
    printf("What is the radius? ");
    scanf("%f", &radius);
    // 22/7.0 is resulting in .999999999 hence the round off, but it's more accurate.
    // for the value of pie which are not till 5 significant digits, the formula is not showing the result, which I expect.
    float circumference = 2 * 3.14159 * radius;
    float area = 3.14159 * radius * radius;
    printf("Area = %.2f\nCircumference = %.2f\n", area, circumference);
}