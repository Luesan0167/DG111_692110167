#include <stdio.h>
int main()
{
    printf("=== 1.FOR LOOP ===\n");
    int sum_1 = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        sum_1 += i;
    }
    printf("\nSum = %d\n", sum_1);

    printf("\n=== 2.WHILE LOOP ===\n");
    int k = 1;
    int sum_2 = 0;
    while (k <= 10)
    {
        printf("%d\n", k);
        sum_2 += k;
        k++;
    }
    printf("\nSum = %d\n", sum_2);

    printf("\n=== 3.DO-WHILE LOOP ===\n");
    int j = 1;
    int sum_3 = 0;
    do
    {
        printf("%d\n", j);
        sum_3 += j;
        j++;
    } while (j <= 10);
    printf("\nSum = %d\n", sum_3);
    return 0;
}
