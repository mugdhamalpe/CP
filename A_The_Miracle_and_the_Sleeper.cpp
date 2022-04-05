#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll l, r;
        cin>>l>>r;
        ll ans=l, res=0, count=0;
        if(r%2==0){
            ans=r/2;
            ans+=1;
        }else if(r%2!=0){
            ans=(r+1)/2;
        }
        res=r%ans;
        if(ans<l){
            count=l-ans;
            res-=count;
        }
        cout<<res<<endl;
    }
    return 0;
}