#include <bits/stdc++.h>
using namespace std;

int main() {
	
    deque<int> d;
    d.push_back(5);       // [5]
    d.push_back(2);       // [5,2]
    d.push_front(3);      // [3,5,2]
    d.pop_back();         // [3,5]
    d.pop_front();        // [5]
    cout << "Final deque: ";
    for (auto x : d) cout << x << " ";
    cout << "\n";

    stack<int> s;
    s.push(2);            // [2]
    s.push(5);            // [2,5]
    cout << "Top of stack: " << s.top() << "\n"; // 5
    s.pop();              // [2]
    cout << "New top: " << s.top() << "\n";      // 2

    queue<int> q;
    q.push(2);            // [2]
    q.push(5);            // [2,5]
    cout << "Front of queue: " << q.front() << "\n"; // 2
    q.pop();              // [5]
    cout << "Back of queue: " << q.back() << "\n";   // 5

    return 0;
}

