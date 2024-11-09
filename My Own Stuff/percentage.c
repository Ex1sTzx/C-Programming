#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter your student percentage: ");
    scanf("%f", &percentage);

    if (percentage < 40)
    {
        printf("Grade: Fail\n");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Grade: Pass\n");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Grade: A+\n");
    }
    else if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade: Outstanding\n");
    }

    return 0;
}