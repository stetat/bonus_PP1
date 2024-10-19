#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    for(int i = a; i<=b; i++) {
        if(i%d==c) {
            cout<<i<<" ";
        }
    }





   cout<<endl;
   return 0;
}