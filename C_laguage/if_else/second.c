#include <stdio.h>
//Program to find the maximum of two numbers
int main() 
{ 
    int a, b; 
    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 
    if (a > b) {
        printf("%d is greater\n", a); 
    }
    else printf("%d is greater\n", b); 
    return 0;
    
 }
