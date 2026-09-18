#include <stdio.h>

int main(void)
{
    int x;
    int product = 1;
    printf("What is X? ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            product *= i;
        }
    }
    printf("%d\n", product);
}