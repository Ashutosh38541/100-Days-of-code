#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 10; i++)
    {
        if (i >= 1 && i <= 5)
        {
            for(int j = 1 ; j < 2 * i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j < -2 * i + 20; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}