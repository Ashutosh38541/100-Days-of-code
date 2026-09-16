#include <stdio.h>

int main(void)
{
    int sp;
    int cp;
    float percent;
    printf("What is the cost price? ");
    scanf("%d", &cp);
    printf("What is the selling price? ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        float profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit %f%%\n", percent);
    }
    else if (cp > sp)
    {
        float loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss %f%%\n", percent);
    }

}