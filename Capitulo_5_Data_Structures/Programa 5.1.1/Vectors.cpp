#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v;
    v.push_back(3);
    v.push_back(2); 
    v.push_back(5); 

    cout << v[0] << "\n"; 
    cout << v[1] << "\n"; 
    cout << v[2] << "\n"; 

    vector<int> v2 = {2, 4, 2, 5, 1};

    vector<int> a(8);    
    vector<int> b(8, 2); 

    cout << "Elementos de v2 (for tradicional):\n";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << "\n";
    }

    cout << "Elementos de v2 (for-each):\n";
    for (auto x : v2) {
        cout << x << "\n";
    }

    cout << "Último elemento de v2: " << v2.back() << "\n"; // 1
    v2.pop_back();
    cout << "Nuevo último elemento después de pop_back: " << v2.back() << "\n"; // 5

    return 0;
}

