#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a: ");
    scanf("%i", &a);
    printf("b: ");
    scanf("%i", &b);
    printf("Before swap : %i, %i\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap : %i, %i\n", a, b);
}