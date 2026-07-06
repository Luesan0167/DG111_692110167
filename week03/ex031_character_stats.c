#include <stdio.h>
int main()
{
    char character_name[50];
    int HP;
    int attack_power;
    int defense;
    int level;

    printf(" ===Create Your Character=== \n");

    printf("name: ");
    scanf("%s", character_name);

    printf("MAX_HP: ");
    scanf("%d", &HP);

    printf("attack power: ");
    scanf("%d", &attack_power);

    printf("defense: ");
    scanf("%d", &defense);

    printf("level: ");
    scanf("%d", &level);

    printf("\n === Your Character Stats === \n");

    printf("Name  : %s\n", character_name);
    printf("level : %d\n", level);
    printf("HP    : %d\n", HP);
    printf("ATK   : %d\n", attack_power);
    printf("DEF   : %d\n", defense);

    return 0;
}
