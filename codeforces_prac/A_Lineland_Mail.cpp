#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int mini1=arr[1]-arr[0];
    int minilast=arr[n-1]-arr[0];
    int mini2last=arr[n-1]-arr[n-2];
    
    for(int i=0; i<n; i++){
        int mini=min(arr[i+1]-arr[i], arr[i]-arr[i-1]);
        int maxi=max(arr[i]-arr[0], arr[n-1]-arr[i]);
        if(i==0){
            cout<<mini1<<" "<<minilast<<endl;
        }else if(i==n-1){
            cout<<mini2last<<" "<<minilast<<endl;
        }
        else{
            cout<<mini<<" "<<maxi<<endl;
        }
    }

    return 0;
}