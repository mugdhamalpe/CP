#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t, n, ele;
    cin>>t;
    while(t--){
        cin>>n;
        ll maxi=0;
        vector<ll> arr;
        for(ll i=0; i<n; i++){
            cin>>ele;
            maxi=max(maxi, ele);
            arr.push_back(ele);
        }

        ll count=0;
        for(ll i=0; i<n; i++){
            if((arr[i]>arr[i-1]) && (i>0)){
                count=i+1;
                break;
            }else if((arr[i]>arr[i+1])&& (i<n-1)){
                count=i+1;
                break;
            }
        }

        if(count>0){
            cout<<count<<endl;
        }else{
            cout<<"-1"<<endl;
        }


    }
    return 0;
}