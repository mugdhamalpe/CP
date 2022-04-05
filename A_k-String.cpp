#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    string s, res;
    cin>>s;
    int le=s.length();
    for(int i=0; i<s.length(); i++){
        int ans;
        ans=count(s.begin(), s.end(), s[i]);
        if(ans%k!=0 && le!=ans){
            cout<<"-1";
        }else{
            for(int i=0;i<k;i++){
                for(int l=0;l<s.length();l+=k){
                    cout<<s[l];
                }
            }
        }
    }
    return 0;
}