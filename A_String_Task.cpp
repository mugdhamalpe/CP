#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, res=s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            //do nothing
        }else{
            res+='.';
            res+=tolower(s[i]);
        }
    }
    cout<<res<<endl;
    return 0;
}