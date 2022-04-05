#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, res=0;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        reverse(arr, arr+n);
        cout<<arr[0]+arr[1]<<endl;
    }
    return 0;
}