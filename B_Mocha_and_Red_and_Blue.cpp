#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void converse1(ll n){
    for(ll i=0; i<n; i++){
        if(i%2==0)
        cout<<"R";
        else cout<<"B";
    }
}
void converse2(ll n){
    for(ll i=0; i<n; i++){
        if(i%2==0)
        cout<<"B";
        else cout<<"R";
    }
}

int main(){
    int t, n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        string ans="";
        for(ll i=0; i<n; i++){
            while(i<n && s[i]=='?'){
                i++;
            }

            if(i==n){
                break;
            }

            if((i-ans.length())%2!=0){
                char cons=s[i];
                for(int j=ans.length(); j<=i; j++){
                    ans+=
                }
            }
        }
    }
    //eg. R_?_?_?_B
    //ignore R and consider just question marks and char after them, i.e.B

    return 0;
}