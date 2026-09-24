#include <stdio.h>

int main(void)
{
    int n;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    printf("What is n? ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("What is %d element? ", i);
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (array[j] > 0)
        {
            positive++;
        }
        else if (array[j] == 0)
        {
            zero++;
        }
        else
        {
            negative++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d\n", positive, negative, zero);
}
