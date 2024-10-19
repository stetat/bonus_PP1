#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int a, d = 1;
    cin>>a;

    while(a>=d) {
        if(a%d==0) {
            cout<<d<<" ";
        }
        d++;
        
    }


    




   cout<<endl;
   return 0;
}