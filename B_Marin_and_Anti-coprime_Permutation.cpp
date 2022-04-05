#include <bits/stdc++.h>
typedef long long ll;
constexpr ll MOD = 998244353; // 1e9 + 7;
constexpr int N = 1e3 + 5;

using namespace std;

void sol(){
    int n, res=0;
    cin>>n;
    int arr[N];
    if(n%2==0){
        cout<<"0"<<endl;
        return;
    }
    res=arr[n/2]*arr[n/2];
    res%=MOD;
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}