#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, c = 0;
    cin >> a;

    for (int d = 1; d * d <= a; d++) {
        if (a % d == 0) {
            c++;
            if (d != a / d) {
                c++; 
            }
        }
    }

    cout<<c; 
    cout<<endl;
    return 0;
}
