// 6.Write a program which accept two numbers and print maximum number.
// Input : 4 7
// Output : 7

#include<stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first number:");
    scanf("%d", &num1);
    
    printf("Enter second number:");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("%d is maximum number \n", num1);
    } else {
        printf("%d is maximum number \n", num2);
    }
    
    return 0;
}
