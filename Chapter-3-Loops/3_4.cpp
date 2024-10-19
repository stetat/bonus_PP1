#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int a,b,c = 0;
    cin>>a>>b;
    int size = log10(a) + 1;
    for(int i = 0; i<size; i++) {
        int temp = a%10;
        if (b == temp) {
            c++;
        }
        a/=10;
    }
    


    cout<<c;


   cout<<endl;
   return 0;
}