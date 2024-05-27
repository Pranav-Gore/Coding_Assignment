#include<iostream>
using namespace std;

class demo{
    public:
        // members declared inside public will be accessible to anyone...
        int pub;
    private:
        // members declared inside private will no more accessible outside the class...
        int pri;
    protected:
        // members declared inside protected will be accessible in immediate derived class
		// and no more outside the class...
        int prote;

    public:
        demo()  // constructor defination goes here...
        {

			// constructor allows to initialise the members of class...
            pub=10;
            pri=20;
            prote=30;
        }

        void fun(){
            cout<<endl<<"Public Member:"<<pub<<endl;
            cout<<endl<<"Private Member:"<<pri<<endl;
            cout<<endl<<"Protected Member:"<<prote<<endl;

        }
};

int main(){

    demo obj;

    cout<<obj.pub<<endl;
    //cout<<obj.pri;
	// 	Unable to access the private members outside the class...

    //cout<<obj.pro;
	// Unable to access the protected members outside the class...

    cout<<"Accessing public members inside main ... "<<endl;
	cout<<"Public member : "<<obj.pub; 		// output : Public member : 10

    cout<<endl<<endl<<"Accessing all the class members using the fun..";
	obj.fun();				// output : public member : 10
							//			Private member : 20
							//			Protected member : 30

    return 0;
}
