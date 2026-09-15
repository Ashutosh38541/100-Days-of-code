#include <stdio.h>

int main(void)
{
    char c;
    printf("What is the character? ");
    scanf("%c", &c);
    int i = c;
    if (i >= 65 && i <= 90)
    {
        printf("Uppercase Alphabet\n");
    }
    else if ( i >= 97 && i <= 122)
    {
        printf("Lowercase Alphabet\n");
    }
    else if ((i >= 33 && i <= 47) || (i >= 58 && i <= 64) || (i >= 94 && i <= 96) || (i >= 123 && i <= 126))
    {
        printf("Special character\n");
    }
}