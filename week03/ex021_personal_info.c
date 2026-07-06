#include <stdio.h>
int main()
{
    char name[50];
    int age;
    float GPA;
    char subject[50];

    printf(" ===Please enter your personal information=== \n");

    printf("name: ");
    scanf("%s", name);

    printf("age: ");
    scanf("%d", &age);

    printf("GPA: ");
    scanf("%f", &GPA);

    printf("favorite subject: ");
    scanf("%s", subject);

    printf("\n === Your personal information === \n");

    printf("name: %s\n", name);
    printf("age: %d\n", age);
    printf("GPA: %.2f\n", GPA);
    printf("favorite subject: %s\n", subject);

    return 0;
}