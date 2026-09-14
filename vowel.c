#include <stdio.h>

int main(void)
{
    char c;
    printf("What is the char? ");
    scanf("%c", &c);

    if (c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("Vowel\n");
        return 0;
    }
    printf("Consonant\n");
    return 1;
}