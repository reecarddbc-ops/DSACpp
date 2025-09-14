// Stack → push(), pop(), top(), empty(), size()

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30

    // Pop elements
    s.pop();
    cout << "After pop, top: " << s.top() << endl; // 20

    cout << "Stack size: " << s.size() << endl;

    // Print all elements
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
