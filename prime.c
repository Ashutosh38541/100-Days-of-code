#include <stdio.h>

int main(void)
{
    int x;
    int count = 0;
    printf("What is x? ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        for (int i = 1; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
    }
    else
    {
        for (int i = 1; i <= (x + 1) / 2; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
    }

    if (count <= 2)
    {
        printf("Prime\n");
        return 0;
    }
    printf("Not Prime\n");
    return 1;
}