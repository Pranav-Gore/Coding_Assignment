// 11.Write a program which accept N and print first 5 multiples of N.
// Input : 4 
// Output : 4 8 12 16 20

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1; i<=5; i++)
     {
        printf("%d\t",n*i);
    }
    return 0;

}