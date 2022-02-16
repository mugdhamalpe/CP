#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res=0, len=0;
    for(int i=0; i<2*n; i++){
        if(arr[i%n]==1){
            len+=1;
            res=max(res, len);
        }else{
            len=0;
        }
    }
    cout<<res<<endl;
    return 0;
}