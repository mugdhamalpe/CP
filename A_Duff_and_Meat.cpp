#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, p, mini, cost=0;
    cin>>n;
    while(n--){
        cin>>a>>p;
        //a-amt of meat
        //p-cost
        mini=min(mini, p);
        cost+=mini*a;
    }cout<<cost;
    return 0;
}