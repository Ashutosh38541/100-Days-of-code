#include <stdio.h>

int main(void)
{
    char x;
    int a;
    int b; 
    printf("What is a? ");
    scanf("%d", &a);
    printf("What is b? ");
    scanf("%d", &b);
    printf("Which operation do you want? ");
    scanf(" %c", &x);

    switch(x)
    {
        case '+':
        {
            printf("%d\n", a + b);
            break;
        }
        case '-':
        {
            printf("%d\n", a - b);
            break;
        }
        case '*':
        {
            printf("%d\n", a * b);
            break;
        }
        case '/':
        {
            printf("%d\n", a / b);
            break;
        }
        case '%':
        {
            printf("%d\n", a % b);
            break;
        }
        default:
        {
            printf("Invalid operation\n");
        }
    }
    return 0;
}