#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    printf("n : ");
    scanf("%i", &n);
    sum = ((n) * (n + 1)) / 2;
    printf("Sum = %d\n", sum);
}