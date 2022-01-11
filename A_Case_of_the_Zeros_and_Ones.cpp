#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll zero=0, one=0;
    //int len_s=s.size();
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='0'){
            zero+=1;
        }
        if(s[i]=='1'){
            one+=1;
        }
    }
    ll mini = min(zero, one);
    cout<<(n-2*mini);
    return 0;
}

// take minimum of count of 0 and 1
// total number=n-2*min
// coz 01 cannot be adjacent, only 0 or 1 can be left in the end.