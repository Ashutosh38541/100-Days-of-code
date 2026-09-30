#include <stdio.h>

int main(void)
{
    int x = printf("What is x? ");
    scanf("%d", &x);

    int array[x];

    for (int i = 0; i < x - 1; i++)
    {
        printf("What is array[%d] element? ", i);
        scanf("%d", &array[i]);
    }

    int position;
    int element;
    printf("At what position do you want to insert the element and what is the element? ");
    scanf("%d", &position);
    scanf("%d", &element);
    

    for (int i = x - 1; i > position - 2; i--)
    {
        array[i + 1] = array[i]; 
    }
    array[position - 1] = element;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

}