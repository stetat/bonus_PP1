#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    string f[100], l[100];
    double a[100], avg[100];
    double maxA = 0;

    for (int i = 0; i < n; ++i) {
        cin >> f[i] >> l[i];
        int x, y, z;
        cin >> x >> y >> z;
        avg[i] = (x + y + z) / 3.0;
        if (avg[i] > maxA) maxA = avg[i];
    }

    for (int i = 0; i < n; ++i) {
        if (avg[i] == maxA) {
            cout << f[i] << " " << l[i] << endl;
        }
    }

    return 0;
}
