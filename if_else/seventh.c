#include <stdio.h>
//Program to calculate the absolute value of a number:
int main() 
{ 
    int num;
     printf("Enter a number: "); 
     scanf("%d", &num);
      if (num < 0) 
      num = -num; 
      printf("Absolute value: %d\n", num); 
      return 0; 
}
