// 14.Write a program which accept N numbers from user and print minimum
// number from that numbers.
// Input : 4 7 2 1 5 3 8 Output : 1

#include <stdio.h>
int main() {
    int n, minNum, num ,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    scanf("%d", &minNum);
    
    for ( i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < minNum) {
            minNum = num;
        }
    }
    
    printf("Minimum number is: %d\n", minNum);
    
    return 0;
}
