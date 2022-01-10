#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        cout<<((a+2*b+3*c)%2)<<endl;
    }
    return 0;
}