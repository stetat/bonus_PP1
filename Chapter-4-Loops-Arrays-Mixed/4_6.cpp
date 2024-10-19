#include <iostream>
using namespace std;

int main() {
    int k, n;
    
    cin >> k >> n;

    int p = (n - 1) / k + 1;
    int l = (n - 1) % k + 1;

    cout << p << " " << l << endl;

    return 0;
}
