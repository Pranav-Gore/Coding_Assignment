#include<iostream>
using namespace std;

class Constructor{

    int x,y;
    public:
            //default constructor
            Constructor()
            {
                x = 10;
                y = 20;
                cout << "Default Constructor called." << endl;
            }
            //paramerised constructor
            Constructor(int a, int b)
            {
                x = a;
                y = b;
                cout << "Parameterized Constructor called." << endl;
            }
            //copy constructor
            Constructor(const Constructor &cpy)
            {
                x = cpy.x;
                y = cpy.y;
                cout << "Copy Constructor called." << endl;
            }

            // Destructor
            ~Constructor()
            {
                cout << "Destructor called." << endl;
            }
    
    void display(){
        cout<<"X = "<< x <<", Y = "<<y <<endl;
    }
};

int main(){

    Constructor c1; // Default constructor is called
    Constructor c2(5,10); // paramerised constructor is called
    Constructor c3(c2); // Copy constructor is called

    c1.display();
    c2.display();
    c3.display();

    return 0;
}