#include <bits/stdc++.h>

using namespace std;

int minOperations(int arr[],int n){
    int res  = INT_MAX;
    int curr_res = 0;
    for(long long int i=0;i<n;i++){
        curr_res = 0;
        for(long long int j=0;j<n;j++){
            if(abs(arr[i]-arr[j])!=0){
                curr_res = curr_res + abs(arr[i] - arr[j]);
            }
        }
        res = min(res,curr_res);
    }
    return res;
}


int main(){
    int t, n, count=0;
    cin>>t;
    
    while(t--){
        cin>>n;
        int arr[n];
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        int len=sizeof(arr)/sizeof(arr[0]);
        // int maxi=*max_element(arr.begin(), arr.end());
        // for(int i=0; i<n; i++){
        //     while(arr[i]<maxi){
        //         arr[i]+=1;
        //         count+=1;
        //     }
        //     cout<<count;
        // }
        cout<<minOperations(arr, n)<<endl;
    }
    return 0;
}