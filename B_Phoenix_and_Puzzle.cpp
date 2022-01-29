#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool isPerfectSq(int n){
  int res=sqrt(n);
  return res*res==n;
}

int main(){
    int t;
    ll n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0 && isPerfectSq(n/2)){
            cout<<"YES"<<endl;
        }else if(n%4==0 && isPerfectSq(n/4)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}