#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<ll> l(3);
        for(int i=0; i<3; i++){
            cin>>l[i];
        }
        sort(l.begin(), l.end());
        ll largest=l[2];
        if(largest==l[0]+l[1]){
            cout<<"YES"<<endl;
        }else if(l[0]==l[1] && l[2]%2==0){
            cout<<"YES"<<endl;
        }
        else if(l[1]==l[2] && l[0]%2==0){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}