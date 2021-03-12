/*Switch case to find the sum of n numbers and factorial of n number*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, num, sum = 0, fact = 1;

    printf("\n*******************\n");
    printf("Choose..\n 1. for summation \n 2. for factorial\n");
    printf("\n*******************\n");
    printf("\tEnter Your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter number for summation: ");
        scanf("%d", &num);
        while (num > 0)
        {
            sum = sum + num;
            num--;
        }
        printf("Sum of digits is = %d\n", sum);
        break;
    case 2:
        printf("Enter number for factorial: ");
        scanf("%d", &num);
        while (num > 0)
        {
            fact = fact * num;
            num--;
        }
        printf("Factorial is %d\n", fact);
        break;
    default:
        printf("Choice is wrong *** Error! terminating......\n");
    }
    getch();
}