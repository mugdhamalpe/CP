#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//6slices=15m
//8slices=20m
//10slices=25m

int main(){
    ll t, n, pizza_t=0;
    cin>>t;
    while(t--){
        cin>>n;
        //primary cases 6,8,10
        if(n<=6){
            pizza_t=15;
        }
        else if(n<=8){
            pizza_t=20;
        }else if(n<=10){
            pizza_t=25;
        }
        else if(n%2==0){
            pizza_t=(n/2)*5;
        }else if(n%2!=0){
            pizza_t=((n+1)/2)*5;
        }cout<<pizza_t<<endl;
    }
    return 0;
}