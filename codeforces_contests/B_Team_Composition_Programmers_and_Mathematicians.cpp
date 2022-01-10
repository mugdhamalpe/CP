#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll pro_count=0;
        ll math_count=0;
        ll teams = (a+b)/4;
        ll mini_a_b=min(a,b);
        cout<<min(mini_a_b, teams)<<endl;
        /*
        if(a==0&&b==0 || a==0 || b==0){
            cout<<"0"<<endl;
        }
        else if(a<=4 && a<b && (a+b)>8){
            cout<<a<<endl;
        }else if(b<=4 && b<a && (a+b)>8){
            cout<<b<<endl;
        }
        else {
            ll mini_a_b=min(a,b);
            cout<<min(mini_a_b, teams)<<endl;
            // if(teams>=a || teams>=b){
            //     cout<<min(a, b)<<endl;
            // }else{
            //     cout<<teams<<endl;
            // }

        }*/
    }
    return 0;
}
