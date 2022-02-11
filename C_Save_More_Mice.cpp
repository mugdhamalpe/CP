#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[k];
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }
        sort(arr, arr+k);
        int count=0, sum=0;
        for(int i=k-1; i>=0; i--){
            int diff=n-arr[i];
            if(sum+diff<n){
                sum+=diff;
                count+=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}