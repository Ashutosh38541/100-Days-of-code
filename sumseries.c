#include <stdio.h>

int main(void)
{
    int n;
    printf("What is n? ");
    scanf("%d", &n);
    int num = 1;
    int den = 2;
    float sum = 1;
    
    for (int i = 1; i <= n - 1; i++)
    {
        num = num + 2;
        den = den + 2;
        float res = (float) num / (float) den;
        printf("%f  ", res);
        sum = sum + res;
    }
    printf("Approximate sum : %.1f\n", sum);
}