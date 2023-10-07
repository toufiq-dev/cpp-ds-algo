#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> list1 = {2, 4, 5};

    list1.insert_after(list1.begin(), 3);

    for(auto element : list1) {
        cout << element << " ";
    }
}

/*

Few available operations
	Operator =, assign, front, empty, max_size, clear, insert_after, 
    emplace_after, reverse, 
    sort, merge, splice_after, unique, remove, remove_if, resize


*/