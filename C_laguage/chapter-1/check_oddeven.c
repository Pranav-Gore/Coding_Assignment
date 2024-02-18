#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);

    if(num%2==0){
        printf("\nThe number is Even\n");
    }
    else{
        printf("Number is Odd\n");
    }
}