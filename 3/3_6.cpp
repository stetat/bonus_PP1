#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int a, ra = 0;
    cin>>a;
    while(a>0) {
        ra = ra*10 + a%10;
        a/=10;
    }


    cout<<ra;



   cout<<endl;
   return 0;
}