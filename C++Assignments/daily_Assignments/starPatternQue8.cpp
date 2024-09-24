#include<iostream>
using namespace std;

int main(){

    int i , j;

    for ( i = 1; i < 4; i++)
    {
        for ( j = 3; j >= i; j--)
        {
           cout<<"*";
        }
        cout<<endl;   
    }
    for ( i = 1; i < 3; i++)
    {
        for ( j = 2; j >= i; j--)
        {
           cout<<"*";
        }
        cout<<endl;   
    }
    

    return 0;
}