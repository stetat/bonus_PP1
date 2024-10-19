#include <iostream>
using namespace std;

int main() {
    int k;
    
    cin >> k;

    int h = k / 3600;
    int m = (k % 3600) / 60;

    cout << "It is " << h << " hours " << m << " minutes." << endl;

    return 0;
}
