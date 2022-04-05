#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count = 0, modu=0;
        while(n!=0){
            modu=n%10;
            count=max(count, modu);
            n/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}