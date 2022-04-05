#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool colorBalls(ll r,ll g,ll b,ll w){
    ll countr, countg, countb, countw=0;
    // if(r%2!=0){
    //     countr+=1;
    // }else if(g%2!=0){
    //     countg+=1;
    // }
    // if(b%2!=0){
    //     countb+=1;
    // }
    // if(w%2!=0){
    //     countw+=1;
    // }
    if(r%2+g%2+b%2+w%2>1){
        return false;
    }else{
        return true;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        if(colorBalls(r,g,b,w)){
            cout<<"Yes"<<endl;
        }else if(r>0 && g>0 && b>0 && colorBalls(r-1,g-1,b-1,w+1)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}