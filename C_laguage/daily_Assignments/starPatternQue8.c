#include<stdio.h>
int main(){

    int i , j;
    for ( i = 1; i <= 3 ; i++)
    {
        for ( j = 3; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");   
    }
    for ( i = 1; i <= 2 ; i++)
    {
        for ( j = 2; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");   
    }

    return 0;
}