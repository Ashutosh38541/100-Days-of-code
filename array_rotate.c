#include <stdio.h>

int main(void)
{
    int n, k;
    printf("What is n? " );
    scanf("%d", &n);
    printf("Rotation number : ");
    scanf("%d", &k);
    int array[n], copy[n];
    if (k > n)
    {
        k = k % n;
    }
    for (int i = 0; i < n; i++)
    {
        printf("What is element array[%d]- ", i);
        scanf("%d", &array[i]);
        copy[i] = array[i];
    }
    if (k != 0)
    {
        for (int i = n - k; i < n; i++)
        {
            array[i - k] = copy[i];
        }
        for (int i = 0; i < k; i++)
        {
            array[i + k] = copy[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;

}