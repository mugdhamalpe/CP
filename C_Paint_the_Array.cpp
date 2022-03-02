#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b){
    return ((a/gcd(a,b))*b);
}

void paintArray(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    ll g=arr[0];
    ll l=arr[1];
    ll ans=0;
    for(ll i=2; i<n; i++){
        if(i%2==0){
            g=gcd(g, arr[i]);
        }else{
            l=lcm(l, arr[i]);
        }
    }
    if(l%g!=0){
        ans=g;
    }
    bool flag=true;
    for(ll i=1; i<n; i+=2){
        if(arr[i]%g==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<g<<endl;
        return;
    }
    g=arr[1];
    l=arr[0];
    for(ll i=2; i<n; i++){
        if(i%2==1){
            g=gcd(g, arr[i]);
        }else{
            l=lcm(l, arr[i]);
        }
    }
    // if(l%g!=0){
    //     ans=g;
    // }
    flag=true;
    for(ll i=0; i<n; i+=2){
        if(arr[i]%g==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<g<<endl;
        return;
    }
    cout<<"0"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        paintArray();
    }
    return 0;
}