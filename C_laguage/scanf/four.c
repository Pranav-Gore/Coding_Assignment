#include <stdio.h>
//Program to check whether a number is positive, negative, or zero
int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0){
     printf("Positive\n"); 
    }

    else if (num < 0) {
        printf("Negative\n"); 
    }
    else 
        printf("Zero\n"); 
    return 0; 
    
}
