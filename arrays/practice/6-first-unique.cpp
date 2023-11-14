#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class FirstUnique {
    unordered_map<int, int> mymap;
    queue<int> myqueue;
public:
    FirstUnique (vector<int> &nums) {
        for (int i = 0; i < nums.size(); ++i) {
            ++mymap[nums[i]];
            myqueue.push(nums[i]);
        }

        // see the map
        // for (auto x : mymap) {
        //     cout << x.first << " " << x.second << endl;
        // }

        // see the queue
        while (!myqueue.empty()) {
            cout << myqueue.front() << " ";
            myqueue.pop();
        }
    }

    int showFirstUnique () {
        while (!myqueue.empty() && mymap[myqueue.front()] > 1) myqueue.pop();
        if (myqueue.empty()) return -1;
        return myqueue.front();
    }
    
    void add (int value) {
        mymap[value]++;
        if (mymap[value] == 1) myqueue.push(value);
    }
};

int main() {
    vector<int> arr = {6, 2, 6, 3, 5, 6};

    FirstUnique* f = new FirstUnique(arr);
    f -> add(5);
    f -> add(2);
    f -> add(3);
    int ans = f -> showFirstUnique();

    cout << ans;

    return 0;
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