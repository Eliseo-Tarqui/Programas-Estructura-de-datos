#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> q;

    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    cout << q.top() << "\n"; // 7
    q.pop();

    cout << q.top() << "\n"; // 5
    q.pop();

    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();

    priority_queue<int, vector<int>, greater<int>> qmin;

    qmin.push(3);
    qmin.push(5);
    qmin.push(7);
    qmin.push(2);

    cout << qmin.top() << "\n"; // 2
    qmin.pop();

    cout << qmin.top() << "\n"; // 3
    qmin.pop();

    return 0;
}

