/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,num1,r,rn=0;
    printf("enter the number = ");
    scanf("%d",&num);
    
    num1=num;
    
    while(num>0){
        r=num % 10;
        rn=rn*10+r;
        num=num/10;
        
    }
    if(num1==rn){
        printf("palimdrome");
    }
    else{
        printf("not");
    }
    
    return 0;
}