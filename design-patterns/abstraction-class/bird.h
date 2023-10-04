// if !defined is used to ensure 
// if we use the bird.h multiple times it will include just once

#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>

class Bird {
    virtual boid eat() = 0;
    virtual boid eat() = 0;
    // classes that inherits this class 
    // has to implement pure virtual functions
};

class sparrow : public Bird {
    public: 
        void eat() {
            std::cout << "Sparrow is eating\n";
        }
        void fly() {
            std::cout << "Sparrow is flying\n";
        }
};

class eagle : public Bird {
    public: 
        void eat() {
            std::cout << "Eagle is eating\n";
        }
        void fly() {
            std::cout << "Eagle is flying\n";
        }
};

class pigeon : public Bird {
    public: 
        void eat() {
            std::cout << "Eagle is eating\n";
        }
        void fly() {
            std::cout << "Eagle is flying\n";
        }
};

#endif