#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 7; i++ )
    {
        if (i >= 1 && i <= 4)
        {
            for (int j = 1; j <= 4 - i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= i - 4; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= - 2 * i + 15; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}