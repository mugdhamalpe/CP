#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, count=0;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
        }else{
            cout<<(1<<n)-1<<endl;
        }
    }
    return 0;
}