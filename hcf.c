#include <stdio.h>

int main(void)
{
    int a, b, gcd;
    printf("What is a and b? ");
    scanf("%d %d", &a, &b);

    if (b > a)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    while (a % b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }

    printf("The hcf is %d\n", b);
}