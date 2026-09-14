#include <stdio.h>

int main(void)
{
    int num;
    printf("What is the number? ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
        {
            printf("Zero\n");
        }
        else 
        {
            printf("Positive\n");
        }

    }
    else
    {
        printf("Negative\n");
    }
}