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
};

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

void insertAtHead(Node* &head, Node* &tail, int data) {
    if(head == nullptr) {
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1: create a node
    Node* newNode = new Node(data);
    // step2: link the new node to head
    newNode -> next = head;
    // step3: link the prev of head to new node
    head -> prev = newNode;
    // step4: now newNode is the head in the LL
    head = newNode;
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first -> next = second;
    second -> prev = first;

    second -> next = third;
    third -> prev = second;

    printLinkedList(first);

    insertAtHead(first, third, 7);

    printLinkedList(first);

    return 0;
}