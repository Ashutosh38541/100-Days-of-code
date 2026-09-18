#include <stdio.h>

int main(void)
{
    int sum = 1;
    int day;
    printf("Days: ");
    scanf("%d", &day);
    if (day <= 5)
    {
        sum = 2 * day;
    }
    else if (day <= 10)
    {
        sum = 5 * 2 + (day - 5) * 4;
    }
    else if (day <= 30)
    {
        sum = 5 * 2 + 5 * 4 + (day - 10) * 6;
    }
    else if (day > 30)
    {
        printf("Membership Cancelled\n");
        return 1;
    }
    printf("Fine Rs.%d\n", sum);
    return 0;
}