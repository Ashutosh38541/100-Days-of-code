#include <stdio.h>
int main(void)
{
    int x;
    int remainder = 0;
    printf("X: ");
    scanf("%d", &x);

    while (x != 0)
    {
        int digit = x % 10;
        remainder = remainder*10 + digit;
        x = x / 10;
    }
    printf("%d\n", remainder);
}