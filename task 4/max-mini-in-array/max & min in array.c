/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[] = {50,1,200,4,0,10,83,120,356};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    
    for (int i=1; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("maximum elements = %d\n",max);
    printf("minimum elements = %d\n",min);
    
    return 0;
}
