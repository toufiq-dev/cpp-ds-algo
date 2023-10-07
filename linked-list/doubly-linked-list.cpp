#include <iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* prev;
        Node* next;

    Node() : data(0), prev(nullptr), next(nullptr) {}

    // constructor to initialize data and next pointer 
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
}

void printLinkedList(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current -> data << " ";
        current = current -> next;
    }

    cout << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != nullptr) {
        temp = temp -> next;
        len++;
    }

    return len;
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first -> next = second;
    second -> prev = first;

    second -> next = third;
    third -> prev = second;

    

    return 0;
}