#include <iostream>
using namespace std;
int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    double slope12 = (y2 - y1) / (x2 - x1);
    double slope23 = (y3 - y2) / (x3 - x2);
    if (slope12 == slope23) {
        cout << "The three points lie on the same straight line." << endl;
    } else {
        cout << "The three points do not lie on the same straight line." << endl;
    }
    return 0;
}
