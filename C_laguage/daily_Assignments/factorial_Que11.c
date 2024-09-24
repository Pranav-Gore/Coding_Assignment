#include<stdio.h>
int main(){

    int num;
    long factorial = 1;

    printf("Enter A Number: ");
    scanf("%d",&num);

    for (int i = 1 ; i <= num ; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is: %ld\n",num , factorial);
    
    return 0;
}