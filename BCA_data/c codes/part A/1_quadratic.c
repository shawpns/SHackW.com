/* C Program to Find the Roots of the Quadratic Equation */  
#include<stdio.h>  
#include<math.h>  // it is used for math calculation  
#include<conio.h> 
#include<process.h> // for exit(0)


void main()  
{  
    float a, b, c, det, root1, root2, real, img;  
    printf("\n Enter the value of coefficient a, b and c: \n ");  
    scanf("%f %f %f", &a, &b, &c);  

// checking for zeros
    if(a*b*c==0)
    {
        printf("Coefficients are zero\n");
        exit(0);
    }

    // define the quadratic formula of the nature of the root  
    det = b * b - 4 * a * c;      

    // defines the conditions for real and different roots of the quadratic equation  
    if (det > 0)  
    {  
    root1 = (-b + sqrt(det)) / (2 * a);  
    root2 = (-b + sqrt(det)) / (2 * a);  
    printf("The Roots are real and Un_equal or distinct");
    printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);  
    }  

    // elseif condition defines both roots ( real and equal root) are equal in the quadratic equation  
    else if (det == 0)  
    {  
        root1 = root2 = -b / (2 * a); // both roots are equal
        printf("The Roots are real and equal");
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);  
    }  
    
    // if det < 0, means both roots are real and imaginary in the quadratic equation.  
    else 
    {  
        real = -b / (2 * a);  
        img = sqrt(-det) / (2 * a); 
        printf("The roots are complex and imaginary");
        printf("\n value of root1 = %.2f + %.2fi and value of root2 = %.2f - %.2fi ", real, img, real, img);  
    }  
    getch();  
    }  