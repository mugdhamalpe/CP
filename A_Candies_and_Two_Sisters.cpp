#include <bits/stdc++.h>
typedef long long ll;
 
using namespace std;
 
int main(){
    int t;
    ll n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<(n/2)-1<<endl;
        }else{
            cout<<n/2<<endl;
        }
    }
    return 0;
}