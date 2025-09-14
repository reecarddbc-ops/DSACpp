//push_front(), push_back(), pop_front(), pop_back(), front(), back(), size()


#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Push elements at both ends
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Front: " << dq.front() << endl; // 5
    cout << "Back: " << dq.back() << endl;   // 20

    // Pop elements from both ends
    dq.pop_front(); // removes 5
    dq.pop_back();  // removes 20

    cout << "After popping, front: " << dq.front() << endl; // 10

    // Insert again
    dq.push_front(2);
    dq.push_back(30);

    // Print all elements
    for (int x : dq) {
        cout << x << " ";
    }
    return 0;
}
