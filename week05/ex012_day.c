#include <stdio.h>
int main()
{
    int day;
    printf("Enter your day (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("\n %d", day);
        printf(" → Monday");
        break;
    case 2:
        printf("\n %d", day);
        printf(" → Tuesday");
        break;
    case 3:
        printf("\n %d", day);
        printf(" → Wednesday");
        break;
    case 4:
        printf("\n %d", day);
        printf(" → Thursday");
        break;
    case 5:
        printf("\n %d", day);
        printf(" → Friday");
        break;
    case 6:
        printf("\n %d", day);
        printf(" → Saturday");
        break;
    case 7:
        printf("\n %d", day);
        printf(" → Sunday");
        break;
    default:
        printf("\n %d", day);
        printf(" → Invalid input\n");
    }

    if (day == 6 || day == 7)
    {
        printf(" ( 🎉 Weekend!!🎉)\n");
    }
    else if (day >= 1 && day <= 5)
    {
        printf(" ( ⚠️  Weekday ⚠️  )\n");
    }

    return 0;
}