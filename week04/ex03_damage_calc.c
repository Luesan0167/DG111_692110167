#include <stdio.h>
#include <math.h>
int main()
{
    int Player_Attack, Enemy_Defense, Hit_Number, damage;
    printf("Enter Player Attack: ");
    scanf("%d", &Player_Attack);

    printf("Enter Enemy Defense: ");
    scanf("%d", &Enemy_Defense);

    printf("Enter Hit Number: ");
    scanf("%d", &Hit_Number);

    printf("\n===== COMBAT STMULATOR ======\n");

    printf("Player Attack  : %d\n", Player_Attack);
    printf("Enemy Defense  : %d\n", Enemy_Defense);
    printf("Hit Number     : %d\n", Hit_Number);

    int base_damage = Player_Attack - Enemy_Defense;

    if (Hit_Number % 5 == 0)
    {
        damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d", damage);
        printf("  *** CRITICAL HIT! x1.5 ***\n");
    }
    else
    {
        damage = base_damage;
        printf("Damage = %d", damage);
        printf("    (Normal)\n");
    }

    return 0;
}