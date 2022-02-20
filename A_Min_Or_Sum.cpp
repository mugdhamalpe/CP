#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0; i<n; i++){
            arr[i+1]=arr[i] | arr[i+1];
            sum|=arr[i];
            //arr[i]=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}