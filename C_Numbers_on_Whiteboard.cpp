#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<2<<endl;
        int a=n, b=n-1;
        for(int i=1; i<n; i++){
            cout<<a<<" "<<b<<endl;
            a=(a+b+1)/2;
            b-=1;
        }
    }
    return 0;
}

//result cant be<2, coz, merging two positive numbers(one is >2)ans>1
