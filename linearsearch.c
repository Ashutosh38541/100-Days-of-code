#include <stdio.h>

int main(void)
{
    int n;
    printf("What is n? ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("What is %d element? ", i);
        scanf("%d", &array[i]);
    }
    int search;
    printf("What is it that you want to search? ");
    scanf("%d", &search);

    for (int j = 0; j < n; j++)
    {
        if (array[j] == search)
        {
            printf("Found at index %d\n", j);
            return 0;
        }
    }
    printf("%d\n", -1);
    return 1;
}