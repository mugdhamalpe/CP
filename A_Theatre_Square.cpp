#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n,m,a, res1, res2;
    cin>>n>>m>>a;
    if(n%a==0){
        res1=n/a;
    }else{
        res1=(n/a)+1;
    }

    if(m%a==0){
        res2=m/a;
    }else{
        res2=(m/a)+1;
    }
    // if((n*m)%(a*a)>0){
    //     cout<<(n*m)%(a*a)<<endl;
    // }else{
    //     cout<<a<<endl;
    // }
    cout<<res1*res2<<endl;
    return 0;
}