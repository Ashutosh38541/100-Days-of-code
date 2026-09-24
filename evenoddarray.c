#include <stdio.h>

int main(void)
{
    int n;
    printf("What is n? ");
    scanf("%d", &n);
    int array[n];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        printf("What is element %d? ", i);
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (array[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even = %d, Odd = %d\n", even, odd);
}