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
}