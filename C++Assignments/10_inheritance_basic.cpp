#include <iostream>
using namespace std;

// Base class definition
class base {
    private:
        int a, b; // Private members of the base class
    public:
        // Method to input values for a and b
        void input() {
            cout << "Enter A and B value: ";
            cin >> a >> b;
        }

        // Method to display values of a and b
        void show() {
            cout << "Inside Base Class" << endl;
            cout << "A: " << a << " " << "B: " << b << endl;
        }
};

// Derived class inheriting from base class
class derive : public base {
    private:
        int x, y; // Private members of the derived class
    public:
        // Method to input values for x and y
        void getData() {
            cout << "Enter X and Y value: ";
            cin >> x >> y;
        }
        
        // Method to display values of x and y
        void display() {
            cout << "Inside Derive Class" << endl;
            cout << "X: " << x << " " << "Y: " << y << endl;
        }    
};

int main() {
    base baseobj;       // Creating an object of base class
    derive deriveobj;   // Creating an object of derived class

    // Uncomment the following lines to test the base class input and display
    // baseobj.input();
    // baseobj.show();

    // baseobj.getData();=> not allowed 

    // Using derived class object to input and display base class values
    deriveobj.input();  // Input for base class members a and b
    deriveobj.show();   // Display base class members a and b

    // Using derived class object to input and display derived class values
    deriveobj.getData();  // Input for derived class members x and y
    deriveobj.display();  // Display derived class members x and y

    return 0; // Indicating that the program ended successfully
}
