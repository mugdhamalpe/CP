#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        //a-1burle b-2burle
        if(a==0){
            cout<<"1"<<endl;
        }else{
            cout<<a+(2*b)+1<<endl;
        }
    }
    return 0;
}