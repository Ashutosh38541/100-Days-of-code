#include <stdio.h>

int main(void)
{
    int a, b, a1, b1, lcm;
    printf("What is a and b? ");
    scanf("%d %d", &a, &b);
    a1 = a;
    b1 = b;

    if (b > a)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    while (a % b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    lcm = a1 * b1 / b;
    printf("The lcm is %d\n", lcm);
    return 0;
    
}