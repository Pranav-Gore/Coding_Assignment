#include<iostream>
using namespace std;

int main(){

    int givenNum;
    int reverse = 0;

    cout<<"Enter A Number:"<<endl;
    cin>>givenNum;

    while (givenNum != 0)
    {
        int digit = givenNum % 10;
        reverse = reverse *10 + digit;
        givenNum = givenNum / 10;
    }
    cout<<"Reverse Number Is:"<<reverse<<endl;

    return 0;
}