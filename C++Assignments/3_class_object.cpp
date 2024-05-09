#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    string address;

    public:
    void input(){
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Age:"<<endl;
        cin>>age;
        cout<<"Enter Address:"<<endl;
        cin>>address;
    }
    void show(){
        cout<<"Person Name is:"<<name<<endl;
        cout<<"Person Age is:"<<age<<endl;
        cout<<"Person Address is:"<<address<<endl;
    }
    
};

int main(){

    Person p1;
    p1.input();
    p1.show();
    return 0;
}