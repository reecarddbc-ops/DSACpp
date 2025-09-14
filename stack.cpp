#include <iostream>
using namespace std;

#define MAX 5   

class Stack {
private:
    int arr[MAX];  
    int top;       
public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return top == MAX - 1;
    }

    // Push operation
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed " << value << " onto stack.\n";
        }
    }

    // Pop operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop.\n";
        } else {
            cout << "Popped " << arr[top--] << " from stack.\n";
        }
    }

    // Peek operation (top element)
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

// Main function to test stack
int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();

    s.pop();
    s.display();

    s.push(40);
    s.push(50);
    s.push(60); // Overflow (since MAX = 5)
    s.display();

    cout << (s.isFull() ? "Stack is full.\n" : "Stack is not full.\n");
    cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");

    s.pop();
    s.pop();
    s.pop();
    s.pop(); // Underflow
    s.display();

    cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");

    return 0;
}
