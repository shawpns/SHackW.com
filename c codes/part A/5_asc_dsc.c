#include <stdio.h>
#include<process.h>
#include<conio.h>

void main()
{
    int n, p, q, option;
    int exchange, array[100];

    printf("How many elements to sort ? :  \t");
    scanf("%d", &n);

    printf("Enter %d integer numbers one by one! :  \n", n);
    for (p = 1; p <= n; ++p)
        scanf("%d", &array[p]);

    printf("\nChoose Your Option:\n1. For Ascending\n2. For Descending :  \t");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        for (p = 1; p <= n - 1; ++p)
            for (q = p + 1; q <= n; ++q)
            {
                if (array[p] > array[q])
                {
                    exchange = array[p];
                    array[p] = array[q];
                    array[q] = exchange;
                }
            }
        break;

    case 2:
        for (p = 1; p <= n - 1; ++p)
            for (q = p + 1; q <= n; ++q)
            {
                if (array[p] < array[q])
                {
                    exchange = array[p];
                    array[p] = array[q];
                    array[q] = exchange;
                }
            }
        break;
    default:
        printf("Error!!!!\n");
        exit(0);
    }
    
    printf("\n\tThe Sorted list of numbers are . . . \n");
    for (p = 1; p <= n; ++p)
        printf("  %d\n", array[p]);
        
    getch();
}