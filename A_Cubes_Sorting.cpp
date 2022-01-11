#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

//min no of inversions to do

int main(){
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        bool Sort=false;
        for(ll i=1; i<n; i++){
            if(arr[i]<arr[i-1])//strictly decreasing
            {
                Sort=false;
            }else{
                Sort=true;
                break;
            }
        }
        if(Sort){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

//when strictly decreasing - no of inversions =n(n-1)/2
//we are given cond -> no of oper<=n(n-1)/2-1
//so always ans will be true except when the cube volumes are strictly decr