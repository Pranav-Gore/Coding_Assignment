// 10.Write a program which accept N from user and print number-line for N.
// Input : 4 
// Output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>
 
 int main()
 {
    
    int i , b;

    printf("enter form  which number do you want to print:");
    scanf("%d",&i);

    printf("enter form upto which number do you want to print:");
    scanf("%d",&b);

      for(i ; i<=b; i++){

              printf("%d \n",i);
      }

      return 0;
 }