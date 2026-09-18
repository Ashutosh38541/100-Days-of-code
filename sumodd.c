#include <stdio.h>

int main(void)
{
    int x;
    int sum = 0;
    printf("X: ");
    scanf("%d", &x);

    for (int i = 0; i < x * 2; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}