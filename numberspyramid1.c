#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", (5 - i + j));
        }
        printf("\n");
    }
}