#include<stdio.h>

int main()//Entry point funtion
{
    int division(int ,int);//Function declaration

    int num1,num2,div;//local variable declaration

    printf("\nEnter first number=");
    scanf("%d",& num1);

    printf("\nEnter second number=");
    scanf("%d",& num2);

    div=division(num1,num2);
    printf("\n division= %d\n",div);

    return 0;
}
//user defined function -> user
int division(int num1,int num2){
    //local variable declaration
    int ans;

    ans= num1 / num2;

    return ans;

}



// output:
//     Enter first number=100

//     Enter second number=20

//     division= 5