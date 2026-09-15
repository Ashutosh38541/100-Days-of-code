#include <stdio.h>

int main(void)
{
    int i; 
    printf("What is the percentage? ");
    scanf("%d", &i);

    if (i < 0 || i > 100)
    {
        printf("Invalid percentage.\n");
        return 1;
    }

    if (i >= 90 && i <= 100)
    {
        printf("Grade A\n");
    }
    else if ( i >= 80 && i <= 89)
    {
        printf("Grade B\n");
    }
    else if ( i >= 70 && i <= 79)
    {
        printf("Grade c\n");
    }
    else if ( i >= 60 && i <= 69)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
}