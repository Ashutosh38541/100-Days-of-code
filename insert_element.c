#include <stdio.h>

int main(void)
{
    int x = printf("What is x? ");
    scanf("%d", &x);

    int y = x + 1;

    int array[y];

    for (int i = 0; i < x; i++)
    {
        printf("What is array[%d] element? ", i);
        scanf("%d", &array[i]);
    }

    int position;
    int element;
    printf("At what position do you want to insert the element and what is the element? ");
    scanf("%d", &position);
    scanf("%d", &element);
    

    for (int i = x ; i > position - 2; i--)
    {
        array[i + 1] = array[i]; 
    }
    array[position - 1] = element;

    for (int i = 0; i < y; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

}