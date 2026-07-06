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

    printf("\n === Your Character sheet === \n");
    printf(" ╔══════════════════════════════╗\n");

    printf(" ║  %-15s \t\t║\n", character_name);
    printf(" ╠══════════════════════════════╣ \n");

    printf(" ║ Level: %-15d \t║\n", level);
    printf(" ║ HP: %d/ %-15d \t║\n", HP, 150);
    printf(" ║ ATK: %-15d \t║\n", attack_power);
    printf(" ║ DEF: %-15d \t║\n", defense);
    printf(" ╠══════════════════════════════╣  \n");
    printf(" ║ HP Bar: [██████████] 100% \t║\n");
    printf(" ╚══════════════════════════════╝ \n");
    return 0;
}
