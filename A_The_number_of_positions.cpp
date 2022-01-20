#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    int pos_fwd=a+1;
    int pos_bwd=n-b;
    int maxi=max(pos_fwd, pos_bwd);
    cout<<n-maxi+1<<endl;
    return 0;
}