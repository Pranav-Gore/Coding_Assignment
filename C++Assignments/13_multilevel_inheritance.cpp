#include<iostream>
using namespace std;

// Base class definition
class base {
    protected:
        int a; // Protected member, accessible in derived classes
    public:
        // Member function to take input for base class
        void input() {
            cout << "Enter value for base class: ";
            cin >> a;
        }
        /* Optional member function to display value of a
        void show() {
            cout << "Base class value: " << a << endl;
        }
        */
};

// Derived class derive1 inheriting from base
class derive1 : public base {
    protected:
        int b; // Protected member, accessible in further derived classes
    public:
        // Member function to take input for derive1 class
        void input1() {
            cout << "Enter value for derive 1 class: ";
            cin >> b;
        }
        /* Optional member function to display values of a and b
        void show1() {
            cout << "Base class value: " << a << endl;
            cout << "Derive 1 class value: " << b << endl;
        }
        */
};

// Derived class derive2 inheriting from derive1
class derive2 : public derive1 {
    private:
        int c; // Private member, accessible only within derive2
    public:
        // Member function to take input for derive2 class
        void input2() {
            cout << "Enter value for derive 2 class: ";
            cin >> c;
        }
        // Member function to display values of a, b, and c
        void show2() {
            cout << "Base class value: " << a << endl;
            cout << "Derive 1 class value: " << b << endl;
            cout << "Derive 2 class value: " << c << endl;
        }
};

int main() {
    // Creating an object of derived class derive2
    derive2 obj2;

    // Calling member functions to take input for base, derive1, and derive2 classes
    obj2.input();    // Takes input for base class
    obj2.input1();   // Takes input for derive1 class
    obj2.input2();   // Takes input for derive2 class

    // Calling member function to display all values
    obj2.show2();    // Displays values of a, b, and c

    return 0;
}
