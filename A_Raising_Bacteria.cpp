#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll x, res=0;
    cin>>x;
    while(x/2!=0){
        if(x%2==1){
            res+=1;
        }
        x=x/2;
    }
    cout<<res+1<<endl;
    return 0;
}