#include <stdio.h>
int main(void)
{
    int x;
    int product = 1;
    printf("What is x? ");
    scanf("%d", &x);

    while (x != 0)
    {
        int digit = x % 10;
        if (digit %2 != 0)
        {
            product = product * digit;
        }
        x = x / 10;
    }
    printf("%d\n", product);
}