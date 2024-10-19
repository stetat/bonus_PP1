#include <iostream>
#include <cmath>
using namespace std;

double d(int a, int b) {
    return sqrt(a * a + b * b);
}

int main() {
    int n;
    cin >> n;

    double m = -1;
    int x, y, fx, fy;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        double t = d(x, y);
        if (t > m) {
            m = t;
            fx = x;
            fy = y;
        }
    }

    cout << fx << " " << fy << endl;

    return 0;
}
