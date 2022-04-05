#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,B,x,y;
        cin>>n>>B>>x>>y;
        ll res=0;
        ll arr[n];
        for(int i=1; i<=n; i++){
            arr[0]=0;
            ll sum=arr[i-1]+x;
            if(sum>B){
                arr[i]=arr[i-1]-y;
            }else{
                arr[i]=arr[i-1]+x;
            }
        }
        for(int i=0; i<n+1; i++){
            res+=arr[i];
        }
        cout<<res<<endl;
        // if(x==y){
        //     cout<<((n+1)/2)*x<<endl;
        // }else if(x>y){
        //     cout<<-(x+y)<<endl;
        // }else if(y>x){
        //     cout<<(n*(n+1)/2)<<endl;
        // }
    }
    return 0;
}