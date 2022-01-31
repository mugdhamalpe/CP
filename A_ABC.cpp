#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        if(n>2 || s=="11" || s=="00"){
            cout<<"NO"<<endl;
        }else if(n<=2){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}