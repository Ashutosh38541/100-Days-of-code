#include <stdio.h>

int main(void)
{
    int x; 
    long long int fact = 1;
    int sum = 0;
    printf("What is x? ");
    scanf("%d", &x);
    int og = x;

    while (x != 0)
    {
        int digit = x % 10;
        printf("Digit : %d\n", digit);
        if (digit == 0)
        {
            fact = 1;
            printf("Factorial : %lld\n", fact);
        }
        else
        {
            for (int i = 1; i <= digit; i++)
            {
                
                fact *= i;
            }
            printf("Factorial : %lld\n", fact);
        }
        sum += fact;
        fact = 1;
        x = x / 10;
    }
    if (sum == og)
    {
        printf("Strong number.\n");
    }
    else
    {
        printf("Not strong number.\n");
    }
}