/*
* C Program to concatenate two strings using strcpy function
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
 
void main(){
    char destination[100], source[100];
    printf("Enter first string \n");
    gets(destination);
    printf("Enter second string \n");
    gets(source);
    /*
     * char *strcat(char *destination, const char *source)
     * Concatenates source at the end of destination
     */
    strcat(destination, source);
     
    printf("The string after concatenation is: %s \n", destination);
    printf("\n\n\t\t\tIt's Working !\n\n\n");
    
    getch();
}