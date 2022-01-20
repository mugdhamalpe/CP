#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll steps=0, grid=8;
        for(int i=1; i<=n/2; i++){
            steps+=grid*i;
            grid+=8;
        }
        cout<<steps<<endl;
    }
    return 0;
}