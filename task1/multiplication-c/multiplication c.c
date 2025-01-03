/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,product;
    printf("enter the number = ");
    scanf("%d",&n);
    
    for(i=1; i<=10; i++){
        product=i*n;
        printf("%d x %d = %d\n",i,n,product);
    }
    

    return 0;
}