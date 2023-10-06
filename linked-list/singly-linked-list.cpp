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

void insertAtHead(Node* &head, Node* &tail, int data) {
    // check of empty LL
    if(head == nullptr) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1: create a new node
    Node* newNode = new Node(data);
    
    // step2: point the pointer of the new node to the head
    newNode -> next = head;

    // step3: make new node as the head
    head = newNode;
}

void insertAtTail(Node* head, Node* &tail, int data) {
    // check of empty LL
    if(head == nullptr) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1: create a new node
    Node* newNode = new Node(data);

    // step2: point the pointer of tail to newNode
    tail -> next = newNode;

    // step3: update tail
    tail = newNode;
}

int findLength(Node* head) {
    int len = 0;
    Node* curr = head;

    while(curr != nullptr) {
        curr = curr -> next;
        len++;
    }

    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    // check of empty LL
    if(head == nullptr) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // if position 0, insertAtHead
    if(position == 0) {
        insertAtHead(head, tail, data);
    }

    // if position last, insertAtTail
    int len = findLength(head);
    if(position >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    // step1: find the prev and curr based on position
    int i = 1;
    Node* prev = head;
    while(i < position) {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    // step2: create a new node
    Node* newNode = new Node(data);

    // step3: make new node as current
    newNode -> next = curr;

    // step4: 
    prev -> next = newNode;

}

void deleteNode(Node* &head, Node* &tail, int position) {
    if(head == nullptr) {
        cout << "Cannot delete, LL is empty";
        return;
    }

    // if delete first node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = nullptr;

        // delete temp
        delete temp;

        return;
    } 

    // if delete last node
    int len = findLength(head);
    if(position == len) {
        // step1: find prev
        int i = 1;
        Node* prev = head;
        while(i < position - 1) {
            prev = prev -> next;
            i++;
        }

        // step2: make prev point to null(as tail always point to null)
        prev -> next = nullptr;

        // step3: make a temp to copy current tail
        Node* temp = tail;

        // step4: now the new tail is prev
        tail = prev;

        // step5: delete temp
        delete temp; 

        return;
    }

    // step1: find prev and curr
    int i = 1;
    Node* prev = head;
    while(i < position - 1) {
        prev = prev -> next;
        i++;
    } 
    Node* curr = prev -> next;

    // step2: make pointer of prev point to pointer of curr
    prev -> next = curr -> next;

    // step3: make curr point to nullptr
    curr -> next = nullptr;

    delete curr;
}

int main() {
    // create nodes
    // Node* head = new Node(1);
    // Node* node2 = new Node(2);
    // Node* tail = new Node(4);

    // head -> next = node2;
    // node2 -> next = tail;

    // // Traversing the linked list
    // printLinkedList(head);

    // insertAtHead(head, 3);
    // insertAtHead(head, 13);
    // insertAtHead(head, 19);

    // printLinkedList(head);

    // insertAtTail(tail, 55);
    // insertAtTail(tail, 95);

    // printLinkedList(head);

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);

    printLinkedList(head);

    insertAtHead(head, tail, 9);
    insertAtTail(head, tail, 11);

    printLinkedList(head);

    insertAtPosition(head, tail, 2, 88);
    printLinkedList(head);
    
    insertAtPosition(head, tail, 6, 99);
    printLinkedList(head);

    deleteNode(head, tail, 3);
    printLinkedList(head);

    return 0;
}