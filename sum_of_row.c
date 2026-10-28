#include <stdio.h>

int main(void)
{
    int r, c;
    printf("What is r and c? ");
    scanf("%d %d", &r, &c);
    int array[r][c];
    int array_sum[r];
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            
            printf("What is element array[%d][%d]? ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
        array_sum[i] = sum;
    }
    for (int i = 0; i < r; i++)
    {
        printf("%d\n", array_sum[i]);
    }
    return 0;
    
}