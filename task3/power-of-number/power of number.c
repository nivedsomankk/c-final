/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int power(int base, int expo){
    int r=1;
    if(expo>0){
        for(int i=0; i<expo; i++){
            r=r*base;
        }
    }
    return r;
}

int main()
{
    int x,y,powers;
    printf("Enter two numbers to find power : ");
    scanf("%d%d",&x,&y);
    
    powers=power(x,y);
    
    printf("the power of two numbers : %d",powers);

    return 0;
}