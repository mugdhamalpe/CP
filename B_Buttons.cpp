#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n, count=0;
    cin>>n;
    for(int i=1; i<n; i++){
        count+=(n-i)*i;
    }
    cout<<count+n<<endl;
    return 0;
}

//sequence
// 1*(n-1)+1 
//2*(n-2)+1 
// 3*(n-3)+1 + so on.....
//finally -> sum of
//1*(n-1)+1 + 2*(n-2)+1 + 3*(n-3)+1 + ... + n*(n-n)+1
