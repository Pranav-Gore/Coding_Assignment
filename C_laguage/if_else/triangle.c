#include <stdio.h>
//Program to check whether a triangle is valid or not
int main()
 { 
    int a, b, c; 
    printf("Enter three sides of a triangle: "); 
    scanf("%d %d %d", &a, &b, &c); 
    if (a + b > c && b + c > a && a + c > b) {
    printf("Triangle is valid\n");
    }

    else 
    printf("Triangle is not valid\n");
    return 0;
      
 }
