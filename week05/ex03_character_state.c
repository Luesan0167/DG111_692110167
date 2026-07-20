#include <stdio.h>
int main()

{
    int max_hp, damage, Attack_count, is_poisoned;
    printf("Max HP : ");
    scanf("%d", &max_hp);
    printf("Damage Taken : ");
    scanf("%d", &damage);
    printf("Poisoned (0/1): ");
    scanf("%d", &is_poisoned);

    printf("Attack Count: ");
    scanf("%d", &Attack_count);

    _Bool is_poisoned_bool = is_poisoned;

    int hp = max_hp - damage;
    if (hp < 0)
        hp = 0;

    if (hp == 0)
    {
        printf("\n=== Character State ===\n");
        printf("State: DEAD\n");
    }

    else if (hp < max_hp * 0.25)
    {
        printf("\n=== Character State ===\n");
        printf("State: CRITICAL\n");
    }
    else if (is_poisoned == 1)
    {
        printf("\n=== Character State ===\n");
        printf("State: POISONED\n");
    }
    else
    {
        printf("\n=== Character State ===\n");
        printf("State: NORMAL\n");
    }

    if (Attack_count > 0 && Attack_count % 5 == 0)
    {
        printf(" 💥 Ultimate Ready!");
    }

    return 0;
}
