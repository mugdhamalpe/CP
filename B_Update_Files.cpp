#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll count=0, curr=1;
        while(curr<k){
            //while cur<k, curr will double initially for some hrs
            curr*=2;
            count+=1;
        }
        if(curr<n){
            count+=(n-curr+k-1)/k;
        }
        cout<<count<<endl;
    }
    return 0;
}