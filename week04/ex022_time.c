#include <stdio.h>
int main()
{
    int seconds, minutes, hours;

    printf("Enter seconds: ");
    scanf("%d", &seconds);
    printf("Input: %d seconds\n", seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("Output: %d : %02d : %02d", hours, minutes, seconds);

    return 0;
}