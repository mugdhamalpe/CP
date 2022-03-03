#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n==0){
            cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl;
        }

    }
    return 0;
}

//ans<=1 i.e. 0 or 1
//if sum div by n=>ans=0
//else ans=1