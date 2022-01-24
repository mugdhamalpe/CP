#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll a, b, c, abso, diff;
    cin>>a>>b>>c;
    bool flag;
    abso=abs(a)+abs(b);
    diff=c-abso;
    if(c==abso){
        flag=true;
    }else if(abso>c){
        flag=false;
    }else{
        if(diff%2==0){
            flag=true;
        }else{
            flag=false;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}