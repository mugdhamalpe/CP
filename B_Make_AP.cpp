#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    ll a, b, c, ap_ac=0, ap_ab=0, ap_bc=0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ap_ac=a+c;
        ap_ab=2*b-a;
        ap_bc=2*b-c;

        if((ap_ac)%(2*b)==0){
            cout<<"YES"<<endl;
        }else if((ap_bc>0)&&(ap_bc)%a==0){
            cout<<"YES"<<endl;
        }else if((ap_ab>0)&&(ap_ab)%c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}