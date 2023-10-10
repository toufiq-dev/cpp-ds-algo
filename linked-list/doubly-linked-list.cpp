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

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == nullptr) {
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    } 

    // step1: create a node
    Node* newNode = new Node(data);
    // step2: link the next of tail to new node
    tail -> next = newNode;
    // step3: link the prev of new node to tail
    newNode -> prev = tail;
    // step4: now new node is the tail
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    // LL is empty
    if(head == nullptr) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // position is 1
    if(position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    // position is last
    int len = getLength(head);
    if(position >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    // insertion in middle
    // step1: create a new node
    Node* newNode = new Node(data);

    // step2: find prev and current by the given position
    int i = 1;
    Node* prevNode = head;

    while(i < position) {
        prevNode = prevNode -> next;
        i++;
    }

    Node* currNode = prevNode -> next;

    // step3: point the next of prev to new node
    prevNode -> next = newNode;
    newNode -> prev = prevNode;
    currNode -> prev = newNode;
    newNode -> next = currNode;
 
}

void deleteAtPosition(Node* &head, Node* &tail, int position) {
    // Empty LL
    if (head == nullptr) {
        cout << "Cannot delete a node from an empty LL" << endl;
        return;
    }

    // Delete from first position
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;

        // Delete temp
        delete temp;
        return;
    }

    // Find left, curr, right nodes
    int i = 1;
    Node* left = head;
    while (i < position - 1 && left->next != nullptr) {
        left = left->next;
        i++;
    }

    if (left->next == nullptr) {
        cout << "Position out of range" << endl;
        return;
    }

    Node* curr = left->next;
    Node* right = curr->next;

    // Update pointers
    left->next = right;
    if (right != nullptr) {
        right->prev = left;
    } else {
        // Update the tail if we're deleting the last node
        tail = left;
    }

    // Delete curr
    delete curr;
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

    insertAtTail(first, third, 599);

    printLinkedList(first);

    insertAtPosition(first, third, 3, 99);

    printLinkedList(first);

    deleteAtPosition(first, third, 7);

    printLinkedList(first);

    return 0;
}