#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class FirstUnique {
public:
    
};

int main() {
    vector<int> arr = {6, 2, 3, 6, 3, 5, 2};
}

/*
Problem statement: You have a queue of integers, you need to retrieve the first unique integer in the queue. 
Implement the FirstUnique class. 
    ** FirstUnique(int[] nums) Initializes the object with the numbers in the queue.
    ** int showFirstUnique() returns the value of the first unique integer of the queue, and returns -1 if 
    there is no such integer.
    ** void add(int value) insert value to the queue.

    let's say, initially the class is invoked with it's parameterized constructor, and given the [2, 3, 5]
    as input,
    now, if showFirstUnique() is invoked, it will return 2.
    then, we will add (5), now showFirstUnique() will return 2.
    then, we will add (2), now showFirstUnique() will return 3.
    then, we will add (3), now showFirstUnique() will return -1.
*/