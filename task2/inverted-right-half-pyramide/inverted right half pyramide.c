/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter the numbers = ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
     for(j=0; j<n; j++){
         if(i<j){
            printf("* ");
         }
       
     }
     printf("\n");
    }

    return 0;
}