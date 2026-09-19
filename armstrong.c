#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int count = 0;
    int sum = 0;

    printf("What is the number? ");
    scanf("%d", &x);

    int og = x;
    int num = x;

    while (x != 0)
    {
        x = x / 10;
        count++;
    }

    while (og != 0)
    {
        int digit = og % 10;
        sum = sum + pow(digit, count);
        og = og / 10;
    }

    if (num == sum)
    {
        printf("Armstrong\n");
        return 1;
    }
    printf("Not Armstrong\n");
    return 0;


}