#include <stdio.h>

int main(void)
{
    int n;
    int m;
    printf("What is n? ");
    scanf("%d", &n);
    printf("What is m? ");
    scanf("%d", &m);

    int array1[n];
    int array2[m];
    int merge[n+m];

    for (int i = 0; i < n; i++)
    {
        printf("What is array1[%d]? ", i);
        scanf("%d", &array1[i]);
    }
    for (int j = 0; j < m; j++)
    {
        printf("What is array2[%d]? ", j);
        scanf("%d", &array2[j]);
    }

    for (int i = 0; i < n; i++)
    {
        merge[i] = array1[i];
    }
    for (int j = n; j < n + m; j++)
    {
        merge[j] = array2[j - n];
    }

    printf("The new array is \n");
    for (int k = 0; k < n + m; k++)
    {
        printf("%d ", merge[k]);
    }
    printf("\n");
}