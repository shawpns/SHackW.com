#include <stdio.h>
#include <conio.h>

void main()
{
    int SUB1, SUB2, SUB3, SUB4, SUB5;
    float percentage;

    /* Input marks of five subjects from user */
    printf("\n\tEnter five subject's marks\n\n ");

    printf("\nEnter for SUB1:\t ");
    scanf("%d", &SUB1);

    printf("\nEnter for SUB2:\t ");
    scanf("%d", &SUB2);

    printf("\nEnter for SUB3:\t ");
    scanf("%d", &SUB3);

    printf("\nEnter for SUB4:\t ");
    scanf("%d", &SUB4);

    printf("\nEnter for SUB5:\t ");
    scanf("%d", &SUB5);

    /* Calculate percentage */
    percentage = (SUB1 + SUB2 + SUB3 + SUB4 + SUB5) / 5.0;

    printf("\nPercentage = %.2f\n", percentage);

    /* Find grade according to the percentage */
    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 50)
    {
        printf("Grade E");
    }
    else if (percentage >= 40)
    {
        printf("Grade F");
    }
    else
    {
        printf("Grade G");
    }
    getch();
}