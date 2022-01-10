#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void odd_divisor(){
        ll n;
        cin>>n;
        for(ll i=1;i<=64;i++){
            if((1ll<<i)==n){
                cout<<"NO"<<endl;
                return;
            }
        }cout<<"YES"<<endl;
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        odd_divisor();
    }
    return 0;
}