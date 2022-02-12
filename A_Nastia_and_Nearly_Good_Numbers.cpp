#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }else if(b!=1){
            cout<<"YES"<<endl;
            cout<<a*b<<" "<<a<<" "<<(a*b)+a<<endl;

        }
    }
    return 0;
}