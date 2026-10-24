#include <stdio.h>
int main(void)
{
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("What is element array[%d] ", i);
        scanf("%d", &array[i]);
    }
    int largest = array[0];
    int second_largest = array[0];

    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            int tmp = largest;
            largest = array[i];
            second_largest = tmp;
        }
    }

    printf("Second Largest element is :- %d\n", second_largest);
}
