#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // for(int i=0; i<n; i++){
        //     if(arr[i]==arr[i+1]){
        //         cout<<"0"<<endl;
        //     }
        // }
        int l=1;
        int k=n-1;
        int count=0;
        for(int i=0; i<k-1; i++){
            if(arr[i]==arr[i+1]){
                count=count;
            }else{
                arr[l+k+i]=arr[l+i];
                count+=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}