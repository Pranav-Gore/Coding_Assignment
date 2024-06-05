// 12.Write a program which accept N numbers from user and print addition of that
// numbers.
// Input : 4 7 2 1 5 3 8 Output : 30

#include<stdio.h>

#include <stdio.h>

int main() {
    int N, number, sum = 0, i;
    
    printf("Enter the number of integers to add: ");
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &number);
        sum = sum + number;
    }
    
    printf("Sum of the numbers: %d\n", sum);

    return 0;
}

// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Enter the number of elements you want in array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("\nEnter %d numbers one by one:\n",n);
//     for(i=0; i<n; i++){
//         printf("Element [%d]: ",i+1);
//         scanf("%d",&arr[i]);
//     }
    
// }
