// C program to check alphabet, digit or special character

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    /* Input character from user */
    printf("Enter any single character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch); //Alphabet check
    }
    else if (ch >= '0' && ch <= '9') //character check
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    getch();
}