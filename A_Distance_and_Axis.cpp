#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    ll n, k;
    while(t--){
        cin>>n>>k;
        ll sum=n+k;
        if(n>k){
            cout<<(n+k)%2<<endl;
        }else if(n<=k){
            cout<<abs(n-k)<<endl;
        }
    }
    return 0;
}