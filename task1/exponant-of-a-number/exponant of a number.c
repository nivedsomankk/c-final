/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,i,product=1;
    printf("enter the x = ");
    scanf("%d",&x);
    
    printf("enter the Y = ");
    scanf("%d",&y);
    
    for(i=1; i<=y; i++){
        product=product*x;
       
    }
     printf("%d",product); 
    
    return 0;
}
