#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void minorReduction(){
    string x;
    cin>>x;
    bool flag=false;
    for(ll i=x.size()-1; i>0; i--){
        ll number=x[i]+x[i-1]-96;
        if(number>9){
            flag=true;
            ll mod_num=number%10+48;
            ll div_num=number/10+48;
            x[i]=mod_num;
            x[i-1]=div_num;
            break;
        }
    }

    if(flag){
        cout<<x<<endl;
        return;
    }

    //summation of 2 greatest numbers
    string result="";//empty str
    result+=x[0]+x[1]-48;
    for(ll i=2; i<x.size(); i++){
        result+=x[i];
    }
    cout<<result<<endl;

}
int main(){
    ll t;
    cin>>t;
    //bool flag=false;
    while(t--){
        minorReduction();
    }
    return 0;
}