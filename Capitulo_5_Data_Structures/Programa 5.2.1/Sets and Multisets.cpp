#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    s.insert(3);
    s.insert(3);
    s.insert(3);
    cout << s.count(3) << "\n"; // 1

    cout << s.size() << "\n";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << "\n";

    int x = 2;
    auto it = s.find(x);
    if (it == s.end()) {
        cout << x << " no encontrado\n";
    } else {
        cout << x << " encontrado\n";
    }

    auto first = s.begin();
    auto last = s.end(); last--;
    cout << "Primero: " << *first << ", Último: " << *last << "\n";

    cout << *s.lower_bound(3) << "\n"; 
    cout << *s.upper_bound(3) << "\n";

    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    cout << ms.count(5) << "\n"; // 3

    ms.erase(5);
    cout << ms.count(5) << "\n"; // 0

    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.erase(ms.find(5));
    cout << ms.count(5) << "\n"; // 2

    return 0;
}

