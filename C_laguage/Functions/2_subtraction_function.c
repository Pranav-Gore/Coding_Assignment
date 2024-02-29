#include<stdio.h>

int main()//Entry point funtion
{
    int subtraction(int ,int);//Function declaration

    int num1,num2,subtract;//local variable declaration

    printf("\nEnter first number=");
    scanf("%d",& num1);

    printf("\nEnter second number=");
    scanf("%d",& num2);

    subtract=subtraction(num1,num2);
    printf("\n Subtraction= %d\n",subtract);

    return 0;
}
//user defined function -> user
int subtraction(int num1,int num2){
    //local variable declaration
    int ans;

    ans= num1-num2;

    return ans;

}

// output:

//   Enter first number=20

//  Enter second number=10

//  Subtraction= 10