/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int arr[] = {1,-5,0,10,-8,20,-50};
  int size = sizeof(arr) / sizeof(arr[0]);
  int posCount=0;
  int negCount=0;
  int zeroCount=0;
  
  for(int i=0; i<size; i++){
      if (arr[i]>0){
          posCount++;
      }
      else if(arr[i]<0){
          negCount++;
      }
      else{
          zeroCount++;
      }
  }
  printf("the number of positive elements = %d\n",posCount);
  printf("the number of negative elements = %d\n",negCount);
  printf("the number of zero elements = %d\n",zeroCount);
    return 0;
}
