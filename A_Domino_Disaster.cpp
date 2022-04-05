#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s, ans;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='D'){
                ans+='U';
            }else if(s[i]=='U'){
                ans+='D';
            }else{
                ans+="LR";
                i+=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}