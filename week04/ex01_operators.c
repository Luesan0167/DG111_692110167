#include <stdio.h>
int main()
{

    int expected_1 = 10 / 3;
    printf("Expected result 1: %d\n", expected_1);

    float expected_2 = 10.0 / 3;
    printf("Expected result 2: %f\n", expected_2);

    float expected_3 = (float)10 / 3;
    printf("Expected result 3: %f\n", expected_3);

    float expected_4 = 10 / 3.0;
    printf("Expected result 4: %f\n", expected_4);

    int expected_5 = 10 % 3;
    printf("Expected result 5: %d\n", expected_5);

    int expected_6 = -7 % 3;
    printf("Expected result 6: %d\n", expected_6);

    int expected_7 = 7 % -3;
    printf("Expected result 7: %d\n\n", expected_7);

    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n\n", x);

    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);

    return 0;
}