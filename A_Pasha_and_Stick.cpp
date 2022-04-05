#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n, ans;
    cin>>n;
    if(n%2!=0){
        //i.e odd 
        //ans=0, coz peri of rect is always even
        ans=0;
    }
    else{
        if(n%4==0){
            //when div by 4
            //subtract 1 to remove square chances
            ans=(n/4)-1;
        }else{
            ans=n/4;
        }
    }
    cout<<ans<<endl;
    return 0;
}