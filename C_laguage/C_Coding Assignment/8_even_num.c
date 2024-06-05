// 8. Write a program which accepts N from user and print all even numbers up to N.
// Input : 20
// Output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for( i = 0; i <= n; i ++)
    {
        if (i % 2 == 0) {
            printf("%d \n", i);
            }
    }
    return 0;
}