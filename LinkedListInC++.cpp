#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

void insertAfterValue(Node* head, int after, int value) {
    Node* temp = head;
    while (temp != nullptr && temp->data != after)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Value " << after << " not found.\n";
        return;
    }

    Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteByValue(Node*& head, int value) {
    if (head == nullptr) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    while (curr->next != nullptr && curr->next->data != value)
        curr = curr->next;

    if (curr->next == nullptr) {
        cout << "Value " << value << " not found.\n";
        return;
    }

    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Initial list: ";
    printList(head);

    insertAtBeginning(head, 5);
    cout << "After inserting 5 at beginning: ";
    printList(head);

    insertAfterValue(head, 20, 25);
    cout << "After inserting 25 after 20: ";
    printList(head);


    deleteByValue(head, 30);
    cout << "After deleting 30: ";
    printList(head);

    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
