#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int count=sum, res=0;
    for(int i=0, j=k; j<n; i++, j++){
        sum=sum-arr[i]+arr[j];
        if(sum<count){
            count=sum;
            res=i+1;
        }
    }
    cout<<res+1<<endl;
    return 0;
}