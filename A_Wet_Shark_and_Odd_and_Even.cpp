#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n, ind=-1;
    cin>>n;
    ll arr[n], sum=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        //sum+=arr[i]
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(ll i=0; i<n; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }else{
            if(ind==-1){
                ind=i;
            }else{
                sum+=arr[ind]+arr[i];
                ind=-1;
            }
            // sum+=arr[i];
            // while(sum%2==0){

            //     //sum+=arr[i];
            //     // if(arr[i]%2!=0 && arr[i]==*min_element(arr, arr + n)){
            //     //     sum-=arr[i];
            //     // }
            //     ll mini=*min_element(arr, arr + n);
            //     sum=sum-mini;

            // }
            //break;
        }
    }
    cout<<sum<<endl;
    return 0;
}