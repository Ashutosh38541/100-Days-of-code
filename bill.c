#include <stdio.h>

int main(void)
{
    int units;
    int sum  = 0;
    printf("How many units of electricity? ");
    scanf("%d", &units);

    if (units <= 100)
    {
        sum = 5 * units;
    }
    else if (units <= 200)
    {
        sum = 500 + (units - 100) * 7;
    }
    else if (units <= 300)
    {
        sum = 1200 + (units - 200) * 10;
    }
    else if (units > 300)
    {
        sum = 2200 + (units - 300) * 12;
    }
    printf("Bill Rs. %d\n", sum);
}