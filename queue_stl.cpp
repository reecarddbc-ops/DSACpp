//push(), pop(), front(), back(), empty(), size()

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl;   // 30

    // Pop elements
    q.pop();
    cout << "After pop, front: " << q.front() << endl; // 20

    cout << "Queue size: " << q.size() << endl;

    // Print all elements
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
