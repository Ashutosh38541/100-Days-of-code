#include <stdio.h>

int main(void)
{
    int x;
    printf("What is x? ");
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}