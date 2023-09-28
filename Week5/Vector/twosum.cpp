#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int x;
    cout << "Enter the target value: ";
    cin >> x;

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) { // Start the inner loop from i + 1
            if (v[i] + v[j] == x) {
                cout << "(" << i << "," << j << ")";
                cout << endl;
            }
        }
    }

    return 0;
}
