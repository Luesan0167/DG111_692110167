#include <stdio.h>
int main()
{
    int grade;
    printf("Enter your Point (0-100): ");
    scanf("%d", &grade);

    if (grade >= 80 && grade <= 100)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: A  (4.0)");
    }
    else if (grade >= 75 && grade < 80)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: B+  (3.5)");
    }
    else if (grade >= 70 && grade < 75)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: B  (3.0)");
    }
    else if (grade >= 65 && grade < 70)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: C+  (2.5)");
    }
    else if (grade >= 60 && grade < 65)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: C  (2.0)");
    }
    else if (grade >= 55 && grade < 60)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: D+  (1.5)");
    }
    else if (grade >= 50 && grade < 55)
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: D  (1.0)");
    }
    else
    {
        printf("\n Score:%d  → ", grade);
        printf(" Grade: F  (0.0)");
    }

    if (grade >= 50)
    {
        printf(" — Pass \n");
    }
    else
    {
        printf(" — Fail\n");
    }

    return 0;
}