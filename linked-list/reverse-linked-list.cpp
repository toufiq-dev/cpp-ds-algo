#include <iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;

    Node() : data(0), next(nullptr) {}

    // constructor to initialize data and next pointer 
    Node(int value) : data(value), next(nullptr) {}

    // destructor to release memory when a node is destroyed
    ~Node() {
        // The destructor should only delete the next node if it exists
        if (next != nullptr) {
            delete next;
        }
    }
};

void printLinkedList(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current -> data << " ";
        current = current -> next;
    }

    cout << endl;
}

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    // At the end of the loop, 'prev' will point to the new head.
    return prev;
}

int main() {
    // create nodes
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* tail = new Node(5);

    head -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = tail;

    printLinkedList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    printLinkedList(head);

    return 0;
}
