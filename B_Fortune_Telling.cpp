#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(2*t--){
        ll n,x,y,sum=0;
        cin>>n>>x>>y;
        ll alice=x;
        ll bob=x+3;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0){
            if(x%2==y%2){
                cout<<"Alice"<<endl;
            }else{
                cout<<"Bob"<<endl;
            }
        }else{
            if(x%2!=y%2){
                cout<<"Alice"<<endl;
            }else{
                cout<<"Bob"<<endl;
            }
        }
    }
    return 0;
}