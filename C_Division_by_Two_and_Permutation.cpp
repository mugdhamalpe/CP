#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        for(ll i=0; i<n; i++){
            while(arr[i]>n){
                arr[i]=arr[i]/2;
            }
        }


    }
    return 0;
}