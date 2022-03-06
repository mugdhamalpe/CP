#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count0=0, res=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                count0=i-1;
                break;
            }
        }
        int count0New=0;
        for(int i=n-1; i>=0; i--){
            if(arr[i]==0){
                count0New=i+1;
                break;
            }
        }
        // if(count0>0){
        //     res+=(count0+1);
        //     count0=0;
        // }
        res=count0New-count0;
        cout<<res<<endl;
    }
    return 0;
}