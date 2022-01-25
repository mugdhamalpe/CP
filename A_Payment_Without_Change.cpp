#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        ll a, b, n, S;
        cin>>a>>b>>n>>S;
        if((b+n*a)<S){
            cout<<"NO"<<endl;
        }else if((S%n)>b){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}