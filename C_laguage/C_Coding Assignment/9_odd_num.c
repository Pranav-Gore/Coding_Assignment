// 9. Write a program which accepts N from user and print all odd numbers up to N.
// Input : 20
// Output : 1 3 5 7 9 11 13 15 17 19

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for( i = 0; i <= n; i ++)
    {
        if (i % 2 == 1) {
            printf("%d \n", i);
            }
    }
    return 0;
}