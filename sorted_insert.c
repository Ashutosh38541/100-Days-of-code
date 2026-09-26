#include <stdio.h>

int main(void)
{
    printf("If you want to store 6 elements take x = 7, cause 1 space is left for inserting an element.\n");
    int x; 
    printf("What is x? ");
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x - 1; i++)
    {
        printf("What is element array[%d]? ", i);
        scanf("%d", &array[i]);
    }
    int y;
    printf("What is it that you want to insert? ");
    scanf("%d", &y);

    int index = 0;
    for (int i = 0; i < x - 1; i++)
    {
        if (array[i] < y)
        {
            index++;
        }
    }

    for (int i = x - 2; i > index - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = y;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}