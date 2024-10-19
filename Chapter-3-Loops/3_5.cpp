#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int a, sum = 0;
    cin>>a;
    int s = log10(a)+1;

    for(int i = 0; i<s; i++) {
        int temp = a%10;
        sum+=temp;
        a/=10;
    }

   
    cout<<sum;




   cout<<endl;
   return 0;
}