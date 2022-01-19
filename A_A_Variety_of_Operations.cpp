#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    ll c, d;
    while(t--){
        cin>>c>>d;
        if(c==0 &&d==0){
            cout<<"0"<<endl;
        }else if(c==d){
            cout<<"1"<<endl;
        }else if(abs(c-d)%2==1){
            cout<<"-1"<<endl;
        }else if(abs(c-d)%2==0){
            cout<<"2"<<endl;
        }
    }
    return 0;
}