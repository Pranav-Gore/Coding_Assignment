// 18.Write a program to find cube of a given number.
// Input : 2  Output : 8

#include<stdio.h>
int main(){
    int a, cube;
    printf("Enter the number for cube:\n");
    scanf("%d",&a);

    cube=a*a*a;
    printf("The cube of %d is %d\n ",a,cube);

    return 0;
}