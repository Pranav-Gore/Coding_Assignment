
#include<iostream>
using namespace std;

class MyClass{
    public:
        int iNo;
};

int main(){

    MyClass obj;
    obj. iNo = 10;  // Access attributes and set values
    cout<<obj.iNo<<endl;   // Print attribute values
    return 0;

}