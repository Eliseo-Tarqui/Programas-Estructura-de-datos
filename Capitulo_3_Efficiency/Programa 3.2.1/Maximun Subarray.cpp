#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int best1 = 0;
    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) {
            int sum = 0;
            for (int k = a; k <= b; k++) {
                sum += array[k];
            }
            best1 = max(best1, sum);
        }
    }
    cout << "O(n^3): " << best1 << "\n";

    int best2 = 0;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += array[b];
            best2 = max(best2, sum);
        }
    }
    cout << "O(n^2): " << best2 << "\n";

    int best3 = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k], sum + array[k]);
        best3 = max(best3, sum);
    }
    cout << "O(n): " << best3 << "\n";

    return 0;
}

