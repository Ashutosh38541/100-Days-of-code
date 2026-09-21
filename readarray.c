#include <stdio.h>

int main(void)
{
    int n;
    printf("How many elements do you want? ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0 ; i < n; i++)
    {
        printf("Element %d - ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}