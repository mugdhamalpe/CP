#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int minElement(ll N, ll K){
    vector<ll> vecu;
    for(int i=1; i<=N; i++){
        if(N%i==0 && i>1){
            vecu.push_back(i);
        }else{
            continue;
        }
    }
    K--;
    ll mini=*min_element(vecu.begin(), vecu.end());
    N+=mini;
    N+=(2*K);
    return N;
}

int main(){
    int t;
    ll n, k, finalres;
    cin>>t;
    while(t--){
        cin>>n>>k;
        // vector<ll> vecu;
        // for(int i=1; i<=n; i++){
        //     if(n%i==0 && i>1){
        //         vecu.push_back(i);
        //     }
        // }
        // ll mini=*min_element(vecu.begin(), vecu.end());
        cout<<minElement(n, k)<<endl;

    }
    return 0;
}