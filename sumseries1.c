#include <stdio.h>

int main(void)
{
    float num = 2;
    float den = 3;
    float sum = num / den;
    int n;
    printf("What is n? ");
    scanf("%d", &n);

    for (int i = 1; i <= n - 1; i++)
    {
        num += 2;
        den += 4;
        float res = (float) num / den;
        sum = sum + res;
        printf("%f  ", res);
    }
    printf("Approximate sum : %.1f\n", sum);
    
    
}