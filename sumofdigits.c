#include <stdio.h>

int main(void)
{
    int x;
    int sum = 0;
    printf("What is x? ");
    scanf("%d", &x);

    while (x != 0)
    {
        int digit = x % 10;
        sum = sum + digit;
        x = x / 10;
    }
    printf("%d\n", sum);
}