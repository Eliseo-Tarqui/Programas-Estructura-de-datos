#include <bits/stdc++.h>

using namespace std;

int main() {
	
    vector<int> v = {5, 2, 3, 1, 2, 5, 7, 1};

    cout << "Primer elemento: " << *v.begin() << "\n";

    sort(v.begin(), v.end());
    cout << "Ordenado: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    reverse(v.begin(), v.end());
    cout << "Reverso: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    random_shuffle(v.begin(), v.end());
    cout << "Barajado: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    sort(v.begin(), v.end());

    auto a = lower_bound(v.begin(), v.end(), 5);
    auto b = upper_bound(v.begin(), v.end(), 5);

    if (a != v.end()) cout << "lower_bound(5): " << *a << "\n";
    else cout << "lower_bound(5): no encontrado\n";

    if (b != v.end()) cout << "upper_bound(5): " << *b << "\n";
    else cout << "upper_bound(5): no encontrado\n";

    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "Sin duplicados: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    return 0;
}

