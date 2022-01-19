#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n, k, f, t, joy=-1000000000, joy_c=0;
    cin>>n>>k;
    while(n--){
        cin>>f>>t;
        if(t>k){
            joy_c=f-(t-k);
            joy=max(joy, joy_c);
        }else{
            joy_c=f;
            joy=max(joy, joy_c);
        }
    }
    cout<<joy<<endl;
    return 0;
}