#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void qualQuan(){
    ll n, sum=0;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll sumR=0, sumB=0, countR=0, countB=0;
    sort(arr, arr+n);
    // sumR=arr[n-1];
    // countR=1;
    // sumB=arr[0]+arr[1];
    // countB=2;
    sumB=arr[0];
    for(ll i=1; i<=n; i++){
        sumB+=arr[i]; //sumB= from start (smallest eles)
        if(n-i<0){
            break;
        }
        sumR+=arr[n-i]; //sumR= from end (largest eles)
        if(sumR>sumB){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        qualQuan();
    }
    return 0;
}