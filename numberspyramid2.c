#include <stdio.h>

int main(void)
{
    int k = 1;
    for (int i = 5; i > 0; i--)
    {
        for (int k = 1; k < i; k++)
    {
        printf(" ");
    }
        for (int j = 5; j + 1 > i; j--)
        {
            printf("%d", 5 - j + i);
        }
        printf("\n");
    }
}