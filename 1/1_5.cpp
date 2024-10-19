#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n,m, res;

    cin>>n>>m;

    if( n < 0) {
        res = (109+((n*m) %109))%109;
    }
    else if (n == 0) {
        res = 109;
    }
    else {
        res = (n*m)%109;
    }

    

    cout<<res;



   cout<<endl;
   return 0;
}