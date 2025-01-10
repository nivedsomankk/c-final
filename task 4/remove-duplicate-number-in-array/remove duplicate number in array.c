/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[] = {2,20,4,20,12,3,2,50,4};
    int size = sizeof (arr) / sizeof (arr[0]);
    int temp[size];
    int newSize = 0;
    
    for (int i = 0; i < size; i++) {
        int Duplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == temp[j]) {
                Duplicate = 1;
                break;
            }
        }
        if (!Duplicate) {
            temp[newSize] = arr[i];
            newSize++;
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

  
    return 0;
}
