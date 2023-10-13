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

int getLength(Node* head) {
    int len = 0;

    while(head != nullptr) {
        head = head -> next;
        len++;
    }

    return len;
}

Node* reverseKNodes(Node* head, int k) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    int i = 0;
    int len = getLength(head);
    int group_count = len / k;

    while(i < k && current != nullptr) {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
        i++;
    }

    if (next != nullptr) {
        head->next = reverseKNodes(next, k); // Link the new head
    }

    return prev; // The last node becomes the new head of this group.
}


Node* getMiddle(Node* &head) {
    if(head == nullptr) {
        cout << "LL is empty" << endl;
        return head;
    }

    if(head -> next == nullptr) {
        // only 1 node in LL
        return head;
    }

    // LL has more than 1 node
    Node* slow = head;
    Node* fast = head -> next;

    // two pointer approach
    while(slow != nullptr && fast != nullptr) {
        fast = fast -> next;
        if(fast != nullptr) {
            fast = fast -> next;
            slow = slow -> next;
        }
    }

    return slow;
}

int main() {
    // create nodes
    Node* head = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* tail = new Node(60);

    head -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = tail;

    printLinkedList(head);

    // Reverse the linked list
    // head = reverseLinkedList(head);

    // printLinkedList(head);

    cout << "Middle node is: " << getMiddle(head) -> data << endl;

    head = reverseKNodes(head, 3);

    printLinkedList(head);

    return 0;
}
