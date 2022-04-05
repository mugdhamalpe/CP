#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    // int n=INT_MAX;
    while(t--){
        int k, count=0;
        cin>>k;
        int prev=1,ele=1,nex=1;
        while(k>=ele+prev){
            ele+=prev;
            prev+=2; nex+=1;
        }
        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=n; j++){
        //         if(count==k){
        //             cout<<i<<" "<<j<<endl;
        //         }
        //     }
        //}
        if((k-ele+1)<=nex){
            cout<<k-ele+1<<" "<<nex<<endl;
        }else{
            cout<<nex<<" "<<(2*nex-k+ele-1)<<endl;
        }
    }
    return 0;
}