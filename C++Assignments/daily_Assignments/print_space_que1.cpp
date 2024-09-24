#include<iostream>
using namespace std;

int main(){

    char str[] = "My Name is Pranav";
    int count = 0;
    int i = 0;

    while(str[i] != '\0'){
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
        
    }
    cout<<"Number of space: "<<count<<endl;

    return 0;
}