/*C program to find the sum of cos(x) series

1. First the computer reads the value of  ‘x’ and ‘n’ from the user.
2. Then ‘x’ is converted to radian value.
3. Then using for loop the value of Cos(x) is calculate.
4. Finally the value of Cos(x) is printed.*/

// #include <stdio.h>
// #include <math.h>
// #include <conio.h>

// int factorial(int n)
// {
//     int i, fact = 1;
//     for (i = 1; i <= n; i++)
//         fact = fact * i;
//     return fact;
// }

// int main()
// {
//     double x, cosx = 1, z, term;
//     int j, n, i, sign = 1;

//     printf("\nEnter the number of the terms in a series : "); //Example 10 20
//     scanf("%d", &n);

//     printf("\nEnter the value of x(in degrees) : "); //Example 45 180 90 360
//     scanf("%lf", &x);

//     x = x * 3.14159 / 180; //converting degree to radian
//     i = 0;
//     z = cos(x);

//     for (i = 2; i <= n; i = i + 2)
//     {
//         sign = -sign;
//         term = sign * pow(x, i) / factorial(i);
//         cosx = cosx + term;
//     }

//     printf("\ncos(x) is approximately %.6lf\n", cosx);
//     printf("\nThe value of cos(%lf) using library function %.6lf\n", x, z);

//     return 0;
// }


//---------------------------------------------------------------


#include<stdio.h>
#include<conio.h>
 
void main()
{
    int i, n;
    float x, sum=1, t=1;
     
    printf(" Enter the value of x(in degrees) : ");
    scanf("%f",&x);
     
    printf(" Enter the number of the terms in a series : ");
    scanf("%d",&n);
     
    x=x*3.14159/180;
     
    /* Loop to calculate the value of Cosine */
    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }
     
    printf(" The value of Cos(%f) is : %.4f", x, sum);
    getch();
}

// Step by Step working of the above Program Code:

// Let us assume that the user enters the value of ‘n’ as 4 and ‘x’ as 30.

// Converting ‘x’ to radian value
// x = x * 3.14159 / 180    (x = 30 * 3.14159 / 180)    So,  x=0.52359

// It assigns t=1 and sum=1
// It assigns the value of i=1 and the loop continues till the condition of the for loop is true.


// 3.1.   i<=n    (1<=4)    for loop condition is true

// t = (1 * (-1) * 0.52359 * 0.52359)/(2 * 1 * (2 * 1 – 1))

// So,  t = – 0.13707

// sum = 1 + (- 0.1370)

// So,  sum=0.86293

// i++

// So,  i=2



// 3.2.   i<=n    (2<=4)    for loop condition is true

// t = (- 0.13707 * (-1) * 0.52359 * 0.52359)/(2 * 2 * (2 * 2 – 1))

// So,  t = 0.00313

// sum = 0.86293 + 0.00313

// So,  sum=0.86606

// i++

// So,  i=3



// 3.3.   i<=n    (3<=4)    for loop condition is true

// t = (0.00313 * (-1) * 0.52359 * 0.52359)/(2 * 3 * (2 * 3 – 1))

// So,  t = – 0.000028

// sum = 0.86606 + (- 0.000028)

// So,  sum=0.86603

// i++

// So,  i=4



// 3.4.   i<=n    (4<=4)    for loop condition is true

// t = (-0.000028 * (-1) * 0.52359 * 0.52359)/(2 * 4 * (2 * 4 – 1))

// So,  t = 0.000000137

// sum = 0.86603 + 0.000000137

// So,  sum=0.866030137

// i++

// So,  i=5



// 3.5.  i<=n    (5<=4)    for loop condition is false

// It comes out of the for loop.

// Finally it prints The value of  Cos(0.52359) is : 0.8660
// Thus program execution is completed.