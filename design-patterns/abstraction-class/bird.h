/*
Header Guards (#if !defined... #define... #endif): 
These lines are used to prevent the content of the header file from being included 
multiple times in the same compilation unit. 
It ensures that the code inside the header file is processed only once during compilation. 
If the identifier BIRD_H is not defined, it defines it and proceeds with the declarations. 
Otherwise, it skips the content.
*/

#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;

class Bird {
   public:
        virtual void eat() = 0;
        virtual void fly() = 0;
    // classes that inherits this class 
    // has to implement pure virtual functions
};

class sparrow : public Bird {
    public: 
        void eat() {
            cout << "Sparrow is eating\n";
        }
        void fly() {
            cout << "Sparrow is flying\n";
        }
};

class eagle : public Bird {
    public: 
        void eat() {
            cout << "Eagle is eating\n";
        }
        void fly() {
            cout << "Eagle is flying\n";
        }
};

class pigeon : public Bird {
    public: 
        void eat() {
            std::cout << "Pigeon is eating\n";
        }
        void fly() {
            std::cout << "Pigeon is flying\n";
        }
};

#endif