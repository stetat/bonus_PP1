#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double m = 0, p = 0, c = 0;

    for (int i = 0; i < n; ++i) {
        string f, l;
        int a, b, d;
        cin >> f >> l >> a >> b >> d;
        m += a;
        p += b;
        c += d;
    }

    cout << fixed << setprecision(6) << m / n << " " << p / n << " " << c / n << endl;

    return 0;
}
