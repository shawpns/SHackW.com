//Fibonacci Series using Recursion

#include <stdio.h>
#include <conio.h>

void printFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        printFibonacci(n - 1);
    }
}
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);
    printFibonacci(n - 2); //n-2 because 2 numbers are already printed
    getch();
}



//Fibonacci Series Without using Recursion

// #include <stdio.h>

// void main()
// {
//     int x, y, z, n, i;
//     x = 0;
//     y = 1;

//     printf(" Enter value of n: ");
//     scanf("%d", &n);

//     printf(" Fibonacci Series: ");

//     for (i = 0; i < n - 2; i++)
//     {
//         z = x + y;
//         printf(" %d", z);
//         x = y;
//         y = z;
//     }

//     getch();
// }