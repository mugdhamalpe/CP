#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll negSum=0, count=1;
        ll sumOfN=n*(n+1)/2;
        //sum of neg terms
        while(count<=n){
            negSum+=count;
            count*=2;
        }
        ll result=negSum*2;
        //final sum=sum of n-neg sum
        cout<<sumOfN-result<<endl;
    }
    return 0;
}
