#include<iostream>
using namespace std;

int main(){

    char str[100];
    int i = 0;

    cout<<"Enter a String: "<<endl;
     cin.getline(str, 100); //// Reads a line of input, including spaces, up to 99 characters

    while(str[i] != '\0'){
        cout<<str[i]<<endl;
        i++;
    }
    return 0;
}