#include<iostream>
using namespace std;

class base {
    public:
        int pubno;      // Public member, accessible anywhere
    private:
        int prino;      // Private member, accessible only within the class
    protected:
        int proteno;    // Protected member, accessible within the class and derived classes

    // Constructor to initialize members
    public:  // Making the constructor public so it can be called
    base() {
        pubno = 1;
        prino = 2;
        proteno = 3;
    }
};

class derive : public base {
    // Public inheritance means:
    // pubno remains public
    // prino remains private (inaccessible in derive)
    // proteno remains protected

    public:
        int pub2;

    // Constructor to initialize members
    public: // Making the constructor public so it can be called
    derive() {
        pub2 = 4;
        // Accessing base class members
        pubno = 1;      // OK: pubno is public
        // prino = 2;   // Error: prino is private in base, not accessible here
        proteno = 3;    // OK: proteno is protected, accessible in derived class
    }
};

int main() {
    derive dobj;

    dobj.pubno = 1;    // OK: pubno is public
    // dobj.prino = 2; // Error: prino is private in base, not accessible here
    // dobj.proteno = 3; // Error: proteno is protected, not accessible here

    cout << "dobj.pubno = " << dobj.pubno << endl; // Should print 1
    // cout << "dobj.prino = " << dobj.prino << endl; // Error: prino is private, can't access it
    // cout << "dobj.proteno = " << dobj.proteno << endl; // Error: proteno is protected, can't access it

    return 0;
}
