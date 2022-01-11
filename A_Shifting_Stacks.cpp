#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    bool flag=true;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int sum[n];
        for(int i=1; i<n+1; i++){
            cin>>arr[i];
            sum[i]=sum[i-1]+arr[i];
            flag=true;
        }
        for(int i=1; i<n+1; i++){
            int new_sum=((i-1)*i)/2;
            if(sum[i]-new_sum<0){
                flag=false;
                break;
            }

        }
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(arr[i]==arr[j] && (arr[i]!=0 && arr[j]!=0)){
        //             flag=true;
        //         }else if(arr[i]<=arr[j]){
        //             flag=true;
        //         }
        //     }
        // }
        // if(sum<count){
        //     cout<<"NO"<<endl;
        // }else{
        //     cout<<"YES"<<endl;
        // }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

