#include <stdio.h>

int main(void)
{
    float c;
    float far;
    printf("What is the temperature in celsius? ");
    scanf("%f", &c);

    far = (c * (9/5)) + 32;
    printf("Fahrenheit %.2f\n", far);
}