#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total_sum = k*(w*(w+1)/2);
    int money_wanted = total_sum-n;
    if(money_wanted > 0){
        cout<<money_wanted;
    }else{
        cout<<"0";
    }
    return 0;
}