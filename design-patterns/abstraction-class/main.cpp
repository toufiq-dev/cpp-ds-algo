#include <iostream>
#include "bird.h"
using namespace std;

void birdDoesSomething(Bird *&bird) {
    bird -> eat();
    bird -> fly();
}

int main() {
    Bird *bird = new pigeon();

    birdDoesSomething(bird);

    return 0;
}