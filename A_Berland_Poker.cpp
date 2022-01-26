#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m, k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int jokers=m;
        int divi=n/k;
        int res1=min(m, n/k);
        int res2=((m-res1)+(k-2))/(k-1);
        cout<<res1-res2<<endl;
    }
    return 0;
}