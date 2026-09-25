#include <stdio.h>

int main(void)
{
    int n;
    printf("What is n? ");
    scanf("%d", &n);
    int array[n];
    int reverse[n];

    for (int i = 0; i < n; i++)
    {
        printf("What is array[%d]? ", i);
        scanf("%d", &array[i]);
    }
                                     
    for (int j = n - 1; j >= 0; j--)   
    {
        reverse[(n - 1) - j] = array[j];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", reverse[i]);
    }
}