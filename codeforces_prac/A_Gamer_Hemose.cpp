#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,H;
    cin>>t;
    while(t--){
        cin>>n>>H;
        int arr[n];
        int sum_arr=0;
        for(int i; i<n; i++){
            cin>>arr[i];
            sum_arr+=arr[i];
            if(arr[i]>H){
                cout<<"1";
            }
            else if(sum_arr==H || sum_arr<H){
                cout<<n;
            }
        }
        // for(int i; i<n;i++){
        //     if(arr[i]>H){
        //         cout<<"1";
        //     }
        //     else if(sum_arr==H || sum_arr<H){
        //         cout<<n;
        //     }
        // }

    }

    return 0;
}