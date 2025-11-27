#include <iostream>
#include <queue>
using namespace std;        //priority_queue<int, vector<int>, greater<int>> minpq; min-heap
                            //priority_queue<int> maxpq;   max -heap 



int main()
{

    // Create a max-heap priority queue (default)
    priority_queue<int> pq;

    // Insert elements
    pq.push(30);
    pq.push(10);
    pq.push(20);
    pq.push(40);

    cout << "Elements removed from priority queue in order:\n";

    // Remove elements (largest element comes out first)
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
