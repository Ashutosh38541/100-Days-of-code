#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    printf("What is n? ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Element %d- ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d\n", sum);
}