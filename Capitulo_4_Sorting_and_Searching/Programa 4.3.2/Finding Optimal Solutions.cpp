#include <bits/stdc++.h>
using namespace std;

int k = 8; 
vector<int> p = {2, 3, 7};

bool valid(int x) {
    long long jobs = 0;
    for (int i = 0; i < (int)p.size(); i++) {
        jobs += x / p[i];
    }
    return jobs >= k;
}

int main() {
    int n = p.size(); 

    int z = k * p[0];

    int x = -1;
    for (int b = z; b >= 1; b /= 2) {
        while (!valid(x + b)) x += b;
    }
    int result = x + 1;

    cout << "El tiempo mínimo para procesar todos los trabajos es: " << result << endl;

    return 0;
}

