#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

//to check if i is prime or not
int checkPrime(ll num)
{
    if (num<=1){
        return 0;
    }
    for (ll i=2; i<num; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ll t;
    ll l,r,k;
    cin>>t;
    while(t--){
        cin>>l>>r>>k;
        ll count=0;
        ll diff=l-r;
        for(ll i=l; i<=r; i++){
            if(checkPrime(i)==1){
                count+=1;
            }
        }
        if(diff==0 && l==1){
            cout<<"NO"<<endl;
        }else if(diff==0 && l>1){
                cout<<"YES"<<endl;
        }else if(k>=count){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}