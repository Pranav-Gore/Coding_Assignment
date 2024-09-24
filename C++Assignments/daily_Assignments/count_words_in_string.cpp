#include<iostream>
using namespace std;

int main(){
    char str[] = "Count No of World in String";
    int count = 0 , i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    
    cout<<"No of Words in String: "<<count + 1 <<endl;

    return 0;
}