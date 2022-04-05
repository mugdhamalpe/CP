#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b, res=1e18, ans;
        cin>>a>>b;
        for(ll i=0; i*i<=a; i++){
            if (b == 1 and i == 0){
                continue;
            }
            ans=i;
            ll count=a;
            //count=i;
            while(count){
                count/=(b+i);
                ans+=1;
            }
            res=min(res, ans);
        }
        cout<<res<<endl;
    }
    return 0;
}