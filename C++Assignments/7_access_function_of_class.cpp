#include<iostream>
using namespace std;

class Op{

    public:
        void fun(){
            cout<<"Access a function:"<<endl;
        }

};
int main(){
    Op objfun;
    objfun.fun(); //Accessing a function:
    return 0;
}