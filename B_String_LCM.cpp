#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    ll q, lcm;
    cin>>q;
    while(q--){
        string s, t;
        cin>>s>>t;
        ll s1=s.length();
        ll t1=t.length();
        lcm=s1*t1/gcd(s1, t1);
        string s2="", t2="";
        for(ll i=0; i<lcm/s1; i++){
            s2+=s;
        }for(ll i=0; i<lcm/t1; i++){
            t2+=t;
        }
        if(s2==t2){
            cout<<s2<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}

//if opies of the string s equal to copies of the string t. 
//If such strings are equal, print any one of them, otherwise, there is no solution.