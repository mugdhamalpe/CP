//n passes -> n-1 positions that can't be empty
// means
//sum-max no of passes < max passes -1
//fill sum-m+1 eles
//use sum-m+1 occ of max ele on first ele

//if only 1 ball is present
//n passes -> n-1 positions
//fill these empty places -> using just one ball

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+1];
        ll mx=-1, sum=0, res=0;
        for(ll i=1; i<=n; i++){
            cin>>arr[i];
            mx=max(mx, arr[i]);
            sum+=arr[i];
        }
        if(sum==0){
            //all eles are 0
            cout<<"0"<<endl;
            continue;
        }
        sum-=mx;
        if(sum>=mx-1){
            res=1;
        }else{
            res=(mx-sum-1);
            res+=1;
        }
        cout<<res<<endl;
    }
    return 0;
}



