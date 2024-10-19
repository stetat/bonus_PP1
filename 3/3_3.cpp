#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int a,b;
    cin>>a>>b;

    for(int i = a; i<=b; i++) {
        int temp = 0;
        int tsq = pow(temp, 2);
        while(i>tsq) {
            tsq = pow(temp, 2);
            if(tsq == i) {
                cout<<i<<" ";
                break;
            }
            temp++;

        }

    }





   cout<<endl;
   return 0;
}