#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, res=0;
        cin>>n;
        string s;
        cin>>s;
        //0-male and 1-female
        //int zero=0, one=0;
        for(int i=1; i<n; i++){
            if((s[i]=='0') && s[i]==s[i-1]){
                res+=2;
            }
        }
        for(int i=1; i<n; i++){
            if((s[i-1]=='0' && s[i]=='1') && s[i-1]==s[i+1]){
                res+=1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}