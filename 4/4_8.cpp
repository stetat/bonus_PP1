#include <iostream>
#include <iomanip>
using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
}

int main() {
    int n;
    cin >> n;

    int x[100], y[100];

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    double maxA = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                maxA = max(maxA, area(x[i], y[i], x[j], y[j], x[k], y[k]));
            }
        }
    }

    cout << fixed << setprecision(15) << maxA << endl;

    return 0;
}
