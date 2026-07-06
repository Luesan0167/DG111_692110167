#include <stdio.h>
int main()
{
    char name[50];
    int age;
    float GPA;
    char major[50];

    printf("\n ===Please enter your personal information=== \n");

    printf("name: ");
    scanf("%s", name);

    printf("age: ");
    scanf("%d", &age);

    printf("GPA: ");
    scanf("%f", &GPA);

    printf("major: ");
    scanf("%s", major);

    printf("\n === Your personal information === \n");
    printf("┌───────────────────────────────┐\n");
    printf("│          Personal Card        │\n");
    printf("├───────────────────────────────┤\n");

    printf("│ name: %-19s \t│\n", name);
    printf("│ age: %-19d \t│\n", age);
    printf("│ GPA: %-19.2f \t│\n", GPA);
    printf("│ major: %-19s \t│\n", major);

    printf("└───────────────────────────────┘\n");

    return 0;
}