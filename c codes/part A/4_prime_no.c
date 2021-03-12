#include <stdio.h> 
#include<conio.h>

void main() 
{
  int n, i, c = 0;
  printf("Enter any number n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
      if (n % i == 0) 
      {
         c++;
      }
  }

  if (c == 2) 
  {
  printf("Yes!  %d is a Prime number",n);
  }
  else 
  {
  printf("No! %d is not a Prime number",n);
  }
  getch();    
}