/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "factn.h"

int main ()
{
  int n, f = 1, rem, i, temp,z;
  printf("Hello\n");
  printf("Enter the number");
  scanf ("%d", &n);
  z=factn(n);
  printf("%d", z);

return 0;
}
