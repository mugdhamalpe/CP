#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n, res=0;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //search for code "101"
    for(int i=1; i<n-1; i++){
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1){
            res+=1;
            //inc res and set arr[i+1]=0
            //to remove occ of 101
            arr[i+1]=0;
        }
    }
    cout<<res<<endl;
    return 0;
}