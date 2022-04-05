#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        int arr[n];
        // cout<<(2*(n-1)+k)/n<<endl;
        ll num=(n+k-1)/k;
        k=k*num;
        cout<<(k+n-1)/n<<endl;
    }
    return 0;
}

//s=num.k
//num=n/k=n+k-1/n
//k*=num
//ans=num.k+n-1/n