#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);

    if (minute < 10)
    {

        if (hour > 0 && hour < 12)
        {
            printf("%d:0%d AM", hour, minute);
        }

        else if (hour == 00)
        {
            hour = hour + 12;
            printf("%d:0%d AM", hour, minute);
        }
        else if (hour == 12)
        {

            printf("%d:0%d PM", hour, minute);
        }
        else
        {
            hour = hour + 12 - 24;
            printf("%d:0%d PM", hour, minute);
        }
    }

    else
    {
        if (hour > 0 && hour < 12)
        {
            printf("%d:%d AM", hour, minute);
        }

        else if (hour == 00)
        {
            hour = hour + 12;
            printf("%d:%d AM", hour, minute);
        }
        else if (hour == 12)
        {

            printf("%d:%d PM", hour, minute);
        }
        else
        {
            hour = hour + 12 - 24;
            printf("%d:%d PM", hour, minute);
        }
    }

    return 0;
}
