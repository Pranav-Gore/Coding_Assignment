
#include<iostream>
using namespace std;

class SizeOf{
    int iN0;
};

int main(){

    SizeOf object;
    cout<<"Size of empty class: "<<sizeof(object)<<" bytes"<<endl;
    return 0;
}