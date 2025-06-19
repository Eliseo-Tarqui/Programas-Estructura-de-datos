#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int array[n]; 
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    cout << "Arreglo estatico:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    
    vector<int> v; 
    for (int i = 0; i < n; i++) {
        v.push_back(i + 1); 
    }

    cout << "Vector dinamico:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}

