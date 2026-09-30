#include <stdio.h>

int main(void)

{
    int n;
    printf("What is n? ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("What is array[%d] element? ", i);
        scanf("%d", &array[i]);
    }

    int index;
    printf("Which index number do you want to delete? ");
    scanf("%d", &index);
    for (int i = index; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}