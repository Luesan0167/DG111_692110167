#include <stdio.h>
int main()
{
    int item;
    int Gold = 1000;

    printf("=== ITEM SHOP ===\n");
    printf("GOLD: %d Gold.\n", Gold);

    printf("\n1.Health Potion - 50 Gold (+50 HP) \n");
    printf("2.Mana Potion     - 80 Gold (+30 MP)\n");
    printf("3.Iron Sword      - 500 Gold (+20 ATK) \n");
    printf("4.Leather Armor   - 300 Gold (+15 DEF)\n");
    printf("5.Exit\n");

    printf("\nSelect item(1-5): ");
    scanf("%d", &item);

    printf("\n=== Purchase ===\n");

    switch (item)
    {
    case 1:
        if (Gold >= 50)
        {
            Gold -= 50;
            printf("Health Potion: 50 Gold\n", Gold);
            printf("Remaining    : %d Gold.\n", Gold);
            printf("HP Bonus     : +50 HP!\n");
        }
        else
        {
            printf("Not enough Gold!\n");
        }
        break;
    case 2:
        if (Gold >= 80)
        {
            Gold -= 80;
            printf("Mana Potion: 80 Gold\n", Gold);
            printf("Remaining  : %d Gold.\n", Gold);
            printf("MP Bonus   : +30 MP!\n");
        }
        else
        {
            printf("Not enough Gold!\n");
        }
        break;
    case 3:
        if (Gold >= 500)
        {
            Gold -= 500;
            printf("Iron Sword : 500 Gold\n", Gold);
            printf("Remaining  : %d Gold.\n", Gold);
            printf("ATK Bonus  : +20 ATK!\n");
        }
        else
        {
            printf("Not enough Gold!\n");
        }
        break;
    case 4:
        if (Gold >= 300)
        {
            Gold -= 300;
            printf("Leather Armor: 300 Gold\n", Gold);
            printf("Remaining    : %d Gold.\n", Gold);
            printf("DEF Bonus    : +15 DEF!\n");
        }
        else
        {
            printf("Not enough Gold!\n");
        }
        break;
    case 5:
        printf("Exit the shop.\n");
    }

    printf("\nItem purchased successfully! ✓\n");

    return 0;
}