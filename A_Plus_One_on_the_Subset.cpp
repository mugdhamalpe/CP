#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t, n, mini, temp;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        cout<<arr[n-1]-arr[0]<<endl;
    }
    return 0;
}