/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sumOfDigits(int n){
    int r,sum=0;
    
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n,sum;
    printf("enter a number = ");
    scanf("%d",&n);
    sum=sumOfDigits(n);
    
    printf("the sum digits = %d",sum);
    
    return 0;
}
