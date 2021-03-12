#include <stdio.h>
#include <conio.h>

void main()
{

    char str[100], i;

    printf("Enter a string: \n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);

    printf("\nLength of input string: %d", i);
    getch();
}