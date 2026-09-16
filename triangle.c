#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    printf("What is side a? ");
    scanf("%d", &a);
    printf("What is side b? ");
    scanf("%d", &b);
    printf("What is side c? ");
    scanf("%d", &c);
    if (a + b < c || b + c < a || c + a < b)
    {
        printf("Triangle is invalid\n");
        return 1;
    }
    if ( a == b && b == c)
    {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles\n");
    }
    else 
    {
        printf("Scalen\n");
    }

}