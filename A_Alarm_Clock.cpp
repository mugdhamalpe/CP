#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b){
            cout<<b<<endl;
        }else if(d>=c){
            cout<<"-1"<<endl;
        }
        else{
            ll diffa_b=abs(a-b);
            ll diffc_d=abs(c-d);
            ll res;
            if(diffa_b % diffc_d==0){
                res=diffa_b/diffc_d;
            }else{
                res=diffa_b/diffc_d+1;
            }
            cout<<(b+(c*res))<<endl;
        }
    }
    return 0;
}