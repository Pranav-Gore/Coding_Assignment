#include<iostream>
using namespace std;

// Base class 1
class base1 {
    private:
        int a, b, c; // Private members, accessible only within the class

    public:
        // Member function to take input for base1
        void input() {
            cout << "Enter values for base1 class (two integers): ";
            cin >> a >> b;
        }

        // Member function to show the result of addition
        void show() {
            c = a + b; // Addition of a and b
            cout << "Addition = " << c << endl;
        }
};

// Base class 2
class base2 {
    private:
        int a, b, c; // Private members, accessible only within the class

    public:
        // Member function to take input for base2
        void input1() {
            cout << "Enter values for base2 class (two integers): ";
            cin >> a >> b;
        }

        // Member function to show the result of subtraction
        void show1() {
            c = a - b; // Subtraction of b from a
            cout << "Subtraction = " << c << endl;
        }
};

// Derived class inheriting from base1 and base2
class derive : public base1, public base2 {
    private:
        int a, b, c; // Private members, accessible only within the class

    public:
        // Member function to take input for derive
        void input2() {
            cout << "Enter values for derive class (two integers): ";
            cin >> a >> b;
        }

        // Member function to show the result of multiplication
        void show2() {
            c = a * b; // Multiplication of a and b
            cout << "Multiplication = " << c << endl;
        }
};

int main() {
    // Creating an object of derived class
    derive obj;

    // Calling member functions of base1 through derived class object
    obj.input(); // Takes input for base1 class
    obj.show();  // Shows addition result from base1 class

    // Calling member functions of base2 through derived class object
    obj.input1(); // Takes input for base2 class
    obj.show1();  // Shows subtraction result from base2 class

    // Calling member functions of derived class
    obj.input2(); // Takes input for derive class
    obj.show2();  // Shows multiplication result from derive class

    return 0;
}
