#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    ll x,y,k;
    cin>>t;
    while (t--){
        cin>>x>>y>>k;
        ll total=(y+x)-1;
        ll X=x-1;
        ll result=((k*(y+1)-1)+(X-1))/(x-1);
        result+=k;
        cout<<result<<endl;
        //cout<<(k*(y+x)-1)/(x-1)<<endl;
    }
    return 0;
}


//s=yk+k-1
//trades=(s/x-1)
//additional trades=k
//final=(s/x-1)+k