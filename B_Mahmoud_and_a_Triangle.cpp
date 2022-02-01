#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int count=0;
    for(int i=0; i<n-2; i++){
        if(arr[i]+arr[i+1]>arr[i+2] && arr[i+1]+arr[i+2]>arr[i] && arr[i]+arr[i+2]>arr[i+1]){
            count=1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(count==0){
        cout<<"NO"<<endl;
    }
    return 0;
}