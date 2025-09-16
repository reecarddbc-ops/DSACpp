#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void addAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Node " << value << " added at the beginning.\n";
    }

    void addAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Node " << value << " added at the end.\n";
    }

    void deleteAtBeginning() {
        if (head == NULL) {
            cout << "List is empty. Cannot delete.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        cout << "Node " << temp->data << " deleted from beginning.\n";
        delete temp;
    }

    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty. Cannot delete.\n";
            return;
        }

        if (head->next == NULL) {
            cout << "Node " << head->data << " deleted from end.\n";
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        cout << "Node " << temp->next->data << " deleted from end.\n";
        delete temp->next;
        temp->next = NULL;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void search(int key) {
        Node* temp = head;
        int position = 1;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Value " << key << " found at position " << position << ".\n";
                return;
            }
            temp = temp->next;
            position++;
        }

        cout << "Value " << key << " not found in the list.\n";
    }

    // ✅ New function to reverse the linked list
    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;     // store next node
            current->next = prev;     // reverse link
            prev = current;           // move prev ahead
            current = next;           // move current ahead
        }

        head = prev;
        cout << "Linked list reversed.\n";
    }
};

int main() {
    LinkedList list;

    list.addAtBeginning(30);
    list.addAtBeginning(20);
    list.addAtBeginning(10);
    list.display(); // 10 -> 20 -> 30 -> NULL

    list.addAtEnd(40);
    list.addAtEnd(50);
    list.display(); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    list.deleteAtBeginning();
    list.display(); // 20 -> 30 -> 40 -> 50 -> NULL

    list.deleteAtEnd();
    list.display(); // 20 -> 30 -> 40 -> NULL

    list.search(30);
    list.search(100);

    // 🔁 Reverse the list
    list.reverse();
    list.display(); // 40 -> 30 -> 20 -> NULL

    return 0;
}
