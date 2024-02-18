#include <stdio.h>
//Program to check whether a number is even or odd
int main()
 { 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    if (num % 2 == 0){
         printf("Even\n");
     }
      else 
      printf("Odd\n");
       return 0; 
       
}
