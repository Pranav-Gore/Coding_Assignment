// 13.Write a program which accept N numbers from user and print maximum
// number from that numbers.
// Input : 4 7 2 1 5 3 8 Output : 8

#include<stdio.h>

#include <stdio.h>
int main() {
    int n, maxNum, num ,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    scanf("%d", &maxNum);
    
    for ( i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > maxNum) {
            maxNum = num;
        }
    }
    
    printf("Maximum number is: %d\n", maxNum);
    
    return 0;
}
