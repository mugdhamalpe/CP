#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        
        ll sumR=0, sumB=0, countR=0, countB=0;
        sort(arr, arr+n);
        sumR=arr[n-1];
        countR=1;
        sumB=arr[0]+arr[1];
        countB=2;
        // for(ll i=1; i<=n; i++){
        //     if(i%2==0){
        //         sumR+=i;
        //         countR+=1;
        //     }else{
        //         sumB+=i;
        //         countB+=1;
        //     }
        // }
        if(sumR>sumB && countR<countB){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}