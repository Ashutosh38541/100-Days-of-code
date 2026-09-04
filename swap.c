#include <stdio.h>

int main(void)
{
    int a, b, temp;
    printf("a: ");
    scanf("%i", &a);
    printf("b: ");
    scanf("%i", &b);
    printf("Before swap: %i, %i\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %i, %i\n", a, b);
}