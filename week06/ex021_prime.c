#include <stdio.h>
int main()
{
    int n;
    printf("Enter positive integer: ");
    scanf("%d", &n);

    int is_prime = 1;
    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is NOT a prime number.\n", n);
    }
    return 0;
}