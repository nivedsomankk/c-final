/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
 int findMax(int a,int b){
    int maxmum=(a>b)?a:b;
    return maxmum; 
 }
 

int main()
{
    int a,b,maxofnum;
    printf("enter the numbers = ");
    scanf("%d%d",&a,&b);
    
    maxofnum=findMax(a,b);
    
    printf("the maximum of two numbers = %d",maxofnum);
    

    return 0;
}
