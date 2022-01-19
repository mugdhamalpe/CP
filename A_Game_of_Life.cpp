#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    ll n, m;
    string s, s_new;
    while(t--){
        cin>>n>>m;
        cin>>s;
        s_new=s;
        for(ll j=0; j<min(n,m); j++){
            for(ll i=0; i<n; i++){
                if(s[i]=='0' and (s[i-1]!='1' and s[i+1]=='1')){
                    s_new[i]='1';
                }
                else if(s[i]=='0' and (s[i-1]=='1' and s[i+1]!='1')){
                    s_new[i]='1';
                }
            }s=s_new;
        }
        cout<<s_new<<endl;
    }

    return 0;
}