#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 6; i++)
    {
        if (i >= 1 && i <= 3)
        {
            for(int j = 1 ; j < 2 * i; j++)
            {
                printf("*\n");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j < -2 * i + 12; j++)
            {
                printf("*\n");
            }
            printf("\n");
        }
    }
}