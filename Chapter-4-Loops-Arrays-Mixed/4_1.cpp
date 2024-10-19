#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main () {

    int n, c = 0;
    cin>>n;
    int a[n];
    int b[n];
    
    for(int i = 0; i<n; i++) {
        int temp;
        cin>>temp;    
        a[i]=temp;
        
    }

    sort(a, a+n);

    for(int i = 0; i<n; i ++) {
        if(i==0 || a[i] != a[i-1]) {
            c++;
        }
    }

    

    
    cout<<c;



   cout<<endl;
   return 0;
}