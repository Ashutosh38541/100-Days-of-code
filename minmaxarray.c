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
    int min = array[0];
    int max = array[0];

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Max = %d, Min = %d\n", max, min);

}