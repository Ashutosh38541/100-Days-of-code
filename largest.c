#include <stdio.h>

int main(void)
{
    int x, y, z, temp;
    printf("what is x? ");
    scanf("%i", &x);
    printf("what is y? ");
    scanf("%i", &y);
    printf("what is z? ");
    scanf("%i", &z);

    if (x >= y)
    {
        temp = x;
    }
    else if ( y > x)
    {
        temp = y;
    }
    if (temp <= z)
    {
        temp = z;
    }
    printf("Largest is %d\n", temp);





}