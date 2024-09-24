#include<iostream>
using namespace std;
int main(){

    int num;
    long factorial = 1;

    cout<<"Enter A Number: ";
    cin>>num;

    for (int i = 1 ; i <= num ; i++)
    {
        factorial = factorial * i;
    }

    cout<<"The Factorial of "<<num<<" is :"<<factorial<<endl;
    
    return 0;
}