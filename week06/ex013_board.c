#include <stdio.h>
int main()
{
    int rows = 3;
    int cols = 5;
    int count = 1;
    printf("       === BOARD ===\n");
    printf("+----+----+----+----+----+\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {

            printf("| %2d ", count);
            count++;
        }
        printf("|\n");
        printf("+----");
        for (int j = 1; j < cols; j++)
        {
            printf("+----");
        }
        printf("+\n");
    }

    return 0;
}