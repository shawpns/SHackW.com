#include <stdio.h>
#include <conio.h>

void main()
{
    int num, rev, sum = 0, temp;

    printf("enter the number:\t");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        rev = num % 10;
        sum = (sum * 10) + rev;
        num = num / 10;
    }
    if (temp == sum)
        printf("%d is a palindrome", temp);
    else
        printf("%d is not a palindrome", temp);
    getch();
}