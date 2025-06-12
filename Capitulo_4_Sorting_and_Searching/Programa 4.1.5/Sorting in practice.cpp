#include <bits/stdc++.h>
using namespace std;


bool comp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size(); 
}

struct point {
    int x, y;
    bool operator<(const point &p) const {
        if (x == p.x) return y < p.y;
        return x < p.x;
    }
};

int main() {
	
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.begin(), v.end());
    cout << "Vector ordenado: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    sort(v.rbegin(), v.rend());
    cout << "Vector en orden inverso: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    int a[] = {4, 2, 5, 3, 5, 8, 3};
    int n = 7;
    sort(a, a + n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    string s = "monkey";
    sort(s.begin(), s.end());
    cout << "String ordenado: " << s << endl;

    vector<pair<int, int>> vp = {{1, 5}, {2, 3}, {1, 2}};
    sort(vp.begin(), vp.end());
    cout << "Pares ordenados: ";
    for (auto p : vp) cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;

    vector<tuple<int, int, int>> vt = {{2, 1, 4}, {1, 5, 3}, {2, 1, 3}};
    sort(vt.begin(), vt.end());
    cout << "Tuplas ordenadas: ";
    for (auto t : vt) {
        int a, b, c;
        tie(a, b, c) = t;
        cout << "(" << a << "," << b << "," << c << ") ";
    }
    cout << endl;

    vector<point> vpuntos = {{2, 3}, {1, 4}, {2, 2}, {1, 5}};
    sort(vpuntos.begin(), vpuntos.end());
    cout << "Puntos ordenados: ";
    for (auto p : vpuntos) cout << "(" << p.x << "," << p.y << ") ";
    cout << endl;

    vector<string> vs = {"banana", "apple", "kiwi", "pear", "plum"};
    sort(vs.begin(), vs.end(), comp);
    cout << "Strings ordenados por tamaño y alfabeto: ";
    for (string x : vs) cout << x << " ";
    cout << endl;

    return 0;
}

