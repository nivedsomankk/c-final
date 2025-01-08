/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int reverseNumber(int n){
    int reverse=0,r;
    while(n>0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    
    
}

int main()
{
    int n,reversenumber;
    printf("enter a number reverse = ");
    scanf("%d",&n);
    
    reversenumber=reverseNumber(n);
    printf("the reversed number = %d",reversenumber);

    return 0;
}
