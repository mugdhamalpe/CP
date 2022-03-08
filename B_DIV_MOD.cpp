#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void divMod(){
    ll l,r,a;
    cin>>l>>r>>a;
    ll res1=(r/a)+(r%a);
    ll res2=(r/a)*a-1;
    ll res=(res2/a)+(res2%a);
    // for(int i=l; i<=r; i++){
    //     if(i>a){
    //         if(res<(i/a)+(i%a)){
    //             res=(i/a)+(i%a);
    //         }
    //     }
    //     else if(a>i){
    //         res=(r/a)*a-1;
    //     }
    // }
    if(res2<l){
        cout<<res1<<endl;
        return;
    }else{
        cout<<max(res, res1)<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        divMod();
    }
    return 0;
}