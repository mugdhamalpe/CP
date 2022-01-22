#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=1; i<n; i++){
        int sum=arr[i]+arr[i-1];
        if(sum<k){
            count+=k-sum;
            arr[i]=k-arr[i-1];
        }
    }
    cout<<count<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}