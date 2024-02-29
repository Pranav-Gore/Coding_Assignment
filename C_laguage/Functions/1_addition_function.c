#include<stdio.h>

int main()//Entry point funtion
{
    int add(int ,int);//Function declaration

    int num1,num2,sum;//local variable declaration

    printf("\nEnter first number=");
    scanf("%d",& num1);

    printf("\nEnter second number=");
    scanf("%d",& num2);

    sum=add(num1,num2);
    printf("\n Addition= %d\n",sum);

    return 0;
}
//user defined function -> user
int add(int num1,int num2){
    //local variable declaration
    int ans;

    ans= num1+num2;

    return ans;

}

// output:

//     Enter first number=10

//     Enter second number=20

//     Addition = 30