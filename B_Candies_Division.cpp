#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    ll n, k;
    ll remaining;
    cin>>t;
    while(t--){
        cin>>n>>k;

        if(n<k){
            if(n>(k/2)){
                cout<<k/2<<endl;
            }else{
                cout<<n<<endl;
            }
        }else{
            remaining=n%k;
            n=n-remaining;
            if(remaining<=(k/2)){
                cout<<n+remaining<<endl;
            }else{
                remaining=k/2;
                cout<<n+remaining<<endl;
            }
        }
    }
    return 0;
}