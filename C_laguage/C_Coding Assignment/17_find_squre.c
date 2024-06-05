// 17.Write a program to find square of a given number.
// Input :  4 Output : 16

#include<stdio.h>
int main(){
    int a, squre;
    printf("Enter the number for squre:\n");
    scanf("%d",&a);

    squre=a*a;
    printf("The squre of %d is %d\n ",a,squre);

    return 0;
}