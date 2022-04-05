#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        if(n==1){
            if(arr[n-1]==1){
                cout<<"YES"<<endl;
            }else if(arr[n-1]>1){
                cout<<"NO"<<endl;
            }
        }else{
            reverse(arr, arr+n);
            if(abs(arr[0]-arr[1])>1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}