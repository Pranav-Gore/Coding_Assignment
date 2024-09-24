#include<stdio.h>
int main(){

    int givenNum;
    int reverse = 0;
    printf("Enter A Number : ");
    scanf("%d",& givenNum);

    while(givenNum != 0){
        int digit = givenNum % 10;
        reverse = reverse * 10 + digit;
        givenNum = givenNum / 10;
    }

    printf("Reverse Number is :%d \n",reverse);
    return 0;
}