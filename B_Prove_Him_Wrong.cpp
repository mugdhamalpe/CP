#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n>19){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++){
                ll powie=pow(3, i);
                cout<<powie<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}