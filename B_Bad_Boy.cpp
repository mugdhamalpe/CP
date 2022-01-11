#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//possible sol
// when one yo-yo is in leftmost-top corner and another yo-yo is in rightmost bottom corner.
//then the dist travellled will be max
int main(){
    int t;
    ll n, m, i, j;
    cin>>t;
    while(t--){
        cin>>n>>m>>i>>j;
        //position is 1, 1 => ans=1,m and n,1
        //position is i=n and j=m =>ans=1,m and n,1
        if((i=='1' && j=='1') || (i==n && j==m)){
            cout<<"1"<<" "<<m;
            cout<<" "<<n<<" "<<"1"<<endl;
        }

        else{
            cout<<"1"<<" "<<"1";
            cout<<" "<<n<<" "<<m<<endl;
        }
    }
    return 0;
}
