#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n, arr[110];
    cin>>n;
    double sum=0.0, res=0.0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    res=sum/n;
    //cout<<res<<endl;
    cout<<fixed<<setprecision(12)<<res<<endl;
    return 0;
}