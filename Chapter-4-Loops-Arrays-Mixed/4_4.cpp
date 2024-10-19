#include <iostream>
using namespace std;

int main() {
    long long n;
    
    cin >> n;

    if (n > 0) {
        if (n % 2) n = ((n + 1) >> 1) * n;
        else n = (n >> 1) * (n + 1);
    } else if (n == 0) n = 1;
    else {
        n = -n;
        if (n % 2) n = ((n + 1) >> 1) * n;
        else n = (n >> 1) * (n + 1);
        n = 1 - n;
    }

    cout << n << endl;

    return 0;
}
