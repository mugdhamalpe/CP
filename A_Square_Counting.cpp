#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        if(s==0){
            cout<<"0"<<endl;
        }else{
            cout<<s/(n*n)<<endl;
        }
    }
    return 0;
}