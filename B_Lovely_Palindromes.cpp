#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    string n;
    cin>>n;
    for(int i=n.length()-1; i>=0; i--){
        n+=n[i];
    }
    cout<<n<<endl;
    return 0;
}