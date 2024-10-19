#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n,m,p;
    cin>>n>>m>>p;

    if(n>m && n>p) {
        cout<<n;
    }

    else if (m>=p && m>=n) {
        cout<<m;
    }

    else if (p>=m && p>=n)  { 
        cout<<p;
    }

   
    






   cout<<endl;
   return 0;
}