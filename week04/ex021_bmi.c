#include <stdio.h>
int main()
{
    float weight, height, bmi, height_m;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (m): ");
    scanf("%f", &height);

    height_m = height / 100.0;

    bmi = weight / (height_m * height_m);

    printf("Input Weight (kg): %.2f\n", weight);
    printf("Input Height (m): %.2f\n", height);
    printf("Output BMI: %.2f", bmi);

    if (bmi < 18.5)
    {
        printf("--> underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("--> normal weight.\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("--> overweight.\n");
    }
    else
    {
        printf("--> obese.\n");
    }

    return 0;
}