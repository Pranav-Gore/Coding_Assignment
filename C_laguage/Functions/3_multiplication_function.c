#include<stdio.h>

int main()//Entry point funtion
{
    int multiplication(int ,int);//Function declaration

    int num1,num2,multi;//local variable declaration

    printf("\nEnter first number=");
    scanf("%d",& num1);

    printf("\nEnter second number=");
    scanf("%d",& num2);

    multi=multiplication(num1,num2);
    printf("\n multiplication= %d\n",multi);

    return 0;
}
//user defined function -> user
int multiplication(int num1,int num2){
    //local variable declaration
    int ans;

    ans= num1 * num2;

    return ans;

}

// output:
//     Enter first number=20

//     Enter second number=30

//     multiplication= 600

