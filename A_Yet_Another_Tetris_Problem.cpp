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
        int even_count=0, odd_count=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                even_count+=1;
            }else{
                odd_count+=1;
            }
        }
        if(even_count && odd_count){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        // for(int i=1; i<=n; i++){
        //     arr[i]=arr[i+2];
        //     while(arr[i]>0){
        //         arr[i]=arr[i-1];
        //     }
        // }
        // int count=0;
        // for(int i=0; i=n; i++){
        //     if(arr[i]==0){
        //         count+=1;
        //     }
        // }
        // if(count==n){
        //     cout<<"YES"<<endl;
        // }else{
        //     cout<<"NO"<<endl;
        // }
    }
    return 0;
}