#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin>>n;
    ll arr[n], x, a, ele, zero=0;
    for(ll i=0; i<n; i++){
        cin>>ele;
        //cin>>arr[i];
        if(i==0){
            cout<<ele<<" ";
            zero=ele;
        }
        else{
            cout<<ele+zero<<" ";
            zero=max(zero, (zero+ele));
        }
    }
    //cout<<"\n";
    // for(ll i=1; i<=n; i++){
    //     ll term=arr[i-1];
    //     //ll zero=0;
    //     x=max(zero, (zero+term));
    //     a=x+arr[i];
    //     cout<<a<<" ";
    // }
    cout<<"\n";
    return 0;
}

//Bi=Ai-Xi
//so, Ai=Bi+Xi