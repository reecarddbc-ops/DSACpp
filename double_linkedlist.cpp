#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // Add at the beginning
    void addAtBeginning(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Add at the end
    void addAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete at the beginning
    void deleteAtBeginning() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete!\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;
    }

    // Delete at the end
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete!\n";
            return;
        }

        // If only one node
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        delete temp;
    }

    // Traverse forward
    void traverse() {
        Node* temp = head;
        cout << "List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Display (same as traverse)
    void display() {
        traverse();
    }
};

int main() {
    DoublyLinkedList dll;

    dll.addAtBeginning(10);
    dll.addAtBeginning(20);
    dll.addAtEnd(5);
    dll.addAtEnd(1);

    dll.display();

    dll.deleteAtBeginning();
    dll.display();

    dll.deleteAtEnd();
    dll.display();

    return 0;
}
