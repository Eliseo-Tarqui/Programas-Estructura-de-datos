#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 5328; 

    
    for (int k = 31; k >= 0; k--) {
        if (x & (1 << k)) cout << "1";
        else cout << "0";
    }
    cout << "\n";

    return 0;
}
