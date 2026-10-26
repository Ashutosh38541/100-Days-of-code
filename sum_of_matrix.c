#include <stdio.h>

int main(void)
{
    int r, c, sum = 0;
    printf("How many rows and columns? ");
    scanf("%d %d", &r, &c);

    int array[r][c];
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("What is element array[%d][%d] ? ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }
    printf("Sum of matrix is %d.\n", sum);
}