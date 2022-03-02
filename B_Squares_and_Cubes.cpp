#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, i;
        cin>>n;
        set<ll> s;
        for(ll i=1; i*i<=n; i++){
            s.insert(i*i);
        }for(ll i=1; i*i*i<=n; i++){
            s.insert(i*i*i);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}

//+ve int not larger than n
//add their squares or cubes to the set if they don't exceed n