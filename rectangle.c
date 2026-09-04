#include <stdio.h>

int main(void)
{
    float length, breadth;
    printf("What is the length? ");
    scanf("%f", &length);
    printf("What is the breadth? ");
    scanf("%f", &breadth);
    float perimeter = 2 * (length + breadth);
    float area = length * breadth;
    printf("Area = %f\nPerimeter = %f\n", area, perimeter);
    return 0;
}