#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;

    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } 
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;

            char top = s.top();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;

            s.pop();  // matched pair found
        }
    }

    return s.empty(); // if stack is empty, all brackets matched
}

int main() {
    string input;
    cout << "Enter brackets: ";
    cin >> input;

    if (isBalanced(input))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
