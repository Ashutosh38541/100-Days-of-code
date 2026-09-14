#include <stdio.h>

int main(void)
{
    int year;
    printf("What is the year? ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        printf("Leap year\n");
        return 0;
    }
    printf("Not a leap year \n");
    return 1;
}