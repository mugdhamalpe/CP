#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        if(x==2 && y<=3){
            cout<<"YES"<<endl;
        }else if(y<=x || x>3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // int thou=1000;
        
        // while(thou--){
        //     if(x>1){
        //         x=x-1;
        //     }else if(x>=y){
        //         break;
        //     }else{
        //         x=(x*3)/2;
        //     }
        // }
        // if(x>=y){
        //     cout<<"YES"<<endl;
        // }else{
        //     cout<<"NO"<<endl;
        // }
    }
    return 0;
}