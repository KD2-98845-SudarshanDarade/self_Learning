
#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;

public:
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    friend class LinkedList;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Add node at beginning
    void add_first(int data) {
        Node* newNode = new Node(data);

        newNode->next = head;
        head = newNode;
    }

    // Add node at end
    void add_last(int data) {
        Node* newNode = new Node(data);

        // If list is empty
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display list
    void display() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList list;

    list.add_first(30);
    list.add_first(20);
    list.add_first(10);

    list.add_last(40);
    list.add_last(50);

    list.display();

    return 0;
}