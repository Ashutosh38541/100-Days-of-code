#include <stdio.h>
int main(void)
{
    int time;
    int hours = 0;
    printf("Enter the time in seconds : ");
    scanf("%d", &time);
    int seconds = time % 60;
    int minutes = time / 60;
    if (minutes >= 60)
    {
        hours = minutes / 60;
        minutes = minutes % 60;
    }
    printf("%d : %d : %d", hours, minutes, seconds);
    
}