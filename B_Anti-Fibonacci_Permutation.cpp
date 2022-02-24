#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> vecu;
        // for(ll i=0; i<n; i++){
        //     vecu.push_back(i);
        // }
        //reverse(vecu.begin(), vecu.end());
        for(ll i=1; i<= n; i++){
            cout<<i<<" ";
            for(ll j=n; j>0; j--){
                if(i!=j){
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
        // while(n--){
        //     swap(vecu[i], vecu[i+1]);
        //     for(i=0; i<n; i++){
        //         cout<<vecu[i]<<" ";
        //         cout<<endl;
        //     }
        //     swap(vecu[i], vecu[i+1]);
        // }
    }
    return 0;
}

//reverse numbers -> so that cant form fibonacci ever